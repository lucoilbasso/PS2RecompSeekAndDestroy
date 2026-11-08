#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00107960
// Address: 0x107960 - 0x107984
void entry_00107960_0x107960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107960_0x107960");
#endif

    ctx->pc = 0x107960u;

    // 0x107960: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107960u;
    {
        const bool branch_taken_0x107960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107960) {
            ctx->pc = 0x107964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107960u;
            // 0x107964: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107984u;
            return;
        }
    }
    ctx->pc = 0x107968u;
    // 0x107968: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10796c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10796cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107970: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x107970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x107974: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x107974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x107978: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x107978u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10797c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x10797cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x107980: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x107984u;
}
