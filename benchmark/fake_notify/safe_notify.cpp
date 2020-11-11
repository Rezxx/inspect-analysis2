#include <eosio/eosio.hpp>
#include <eosio/asset.hpp>

using namespace eosio;
using namespace std;

CONTRACT safe_notify : public contract {
  public:
      using contract::contract;

      [[eosio::on_notify("eosio.token::transfer")]] void playgame(name from, name to, asset quantity, string memo) {
        if(from == get_self()) return;
        if(to != _self) return;
        check(false, "hello");
      }

};