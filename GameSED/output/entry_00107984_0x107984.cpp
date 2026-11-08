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

// Function: entry_00107984
// Address: 0x107984 - 0x1079a8
void entry_00107984_0x107984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107984_0x107984");
#endif

    ctx->pc = 0x107984u;

    // 0x107984: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x107984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x107988: 0x5462006b  bnel        $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x107988u;
    {
        const bool branch_taken_0x107988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107988) {
            ctx->pc = 0x10798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107988u;
            // 0x10798c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x107990u;
    // 0x107990: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x107994: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107998: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x107998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x10799c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x10799Cu;
    {
        const bool branch_taken_0x10799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10799Cu;
        // 0x1079a0: 0x34640040  ori         $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10799c) {
            ctx->pc = 0x107A90u;
            return;
        }
    }
    ctx->pc = 0x1079A4u;
    // 0x1079a4: 0x0  nop
    ctx->pc = 0x1079a4u;
    // NOP
    ctx->pc = 0x1079a8u;
}
