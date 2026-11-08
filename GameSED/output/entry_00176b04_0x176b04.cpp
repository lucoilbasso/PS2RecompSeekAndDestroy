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

// Function: entry_00176b04
// Address: 0x176b04 - 0x176b30
void entry_00176b04_0x176b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176b04_0x176b04");
#endif

    ctx->pc = 0x176b04u;

    // 0x176b04: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x176b04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x176b08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x176b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176b0c: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x176b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176b10: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x176b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176b14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176b18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176b1c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176b20: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176b24: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x176B24u;
    {
        const bool branch_taken_0x176b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B24u;
        // 0x176b28: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b24) {
            ctx->pc = 0x176C00u;
            return;
        }
    }
    ctx->pc = 0x176B2Cu;
    // 0x176b2c: 0x0  nop
    ctx->pc = 0x176b2cu;
    // NOP
    ctx->pc = 0x176b30u;
}
