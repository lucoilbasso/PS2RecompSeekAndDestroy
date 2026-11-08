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

// Function: entry_0017e140
// Address: 0x17e140 - 0x17e168
void entry_0017e140_0x17e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e140_0x17e140");
#endif

    ctx->pc = 0x17e140u;

    // 0x17e140: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E140u;
    {
        const bool branch_taken_0x17e140 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E140u;
        // 0x17e144: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e140) {
            ctx->pc = 0x17E168u;
            return;
        }
    }
    ctx->pc = 0x17E148u;
    // 0x17e148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e14c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x17e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e158: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e15c: 0x805f7be  j           func_17DEF8
    ctx->pc = 0x17E15Cu;
    ctx->pc = 0x17E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E15Cu;
    // 0x17e160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF8u;
    WImageTransferToFBufferProc__FP7WcImage_0x17def8(rdram, ctx, runtime); return;
    ctx->pc = 0x17E164u;
    // 0x17e164: 0x0  nop
    ctx->pc = 0x17e164u;
    // NOP
    ctx->pc = 0x17e168u;
}
