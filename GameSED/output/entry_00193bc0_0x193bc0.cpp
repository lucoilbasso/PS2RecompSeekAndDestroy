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

// Function: entry_00193bc0
// Address: 0x193bc0 - 0x193bd8
void entry_00193bc0_0x193bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193bc0_0x193bc0");
#endif

    ctx->pc = 0x193bc0u;

    // 0x193bc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193bc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x193bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x193bc8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x193bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x193bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x193BCCu;
    {
        const bool branch_taken_0x193bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BCCu;
        // 0x193bd0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bcc) {
            ctx->pc = 0x193BE4u;
            return;
        }
    }
    ctx->pc = 0x193BD4u;
    // 0x193bd4: 0x0  nop
    ctx->pc = 0x193bd4u;
    // NOP
    ctx->pc = 0x193bd8u;
}
