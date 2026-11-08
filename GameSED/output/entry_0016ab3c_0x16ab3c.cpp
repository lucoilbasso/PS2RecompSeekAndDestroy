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

// Function: entry_0016ab3c
// Address: 0x16ab3c - 0x16ab88
void entry_0016ab3c_0x16ab3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab3c_0x16ab3c");
#endif

    ctx->pc = 0x16ab3cu;

    // 0x16ab3c: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x16ab40: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x16ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x16ab44: 0x24701400  addiu       $s0, $v1, 0x1400
    ctx->pc = 0x16ab44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x16ab48: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x16ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x16ab4c: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x16AB4Cu;
    {
        const bool branch_taken_0x16ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x16AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB4Cu;
        // 0x16ab50: 0xac621400  sw          $v0, 0x1400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab4c) {
            ctx->pc = 0x16AB88u;
            return;
        }
    }
    ctx->pc = 0x16AB54u;
    // 0x16ab54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ab54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ab58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ab5c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16ab60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ab60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ab64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ab64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ab68: 0x24a573b8  addiu       $a1, $a1, 0x73B8
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29624));
    // 0x16ab6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16ab6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ab70: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x16ab74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16ab74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ab78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ab7c: 0x8068186  j           func_1A0618
    ctx->pc = 0x16AB7Cu;
    ctx->pc = 0x16AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB7Cu;
    // 0x16ab80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x16AB84u;
    // 0x16ab84: 0x0  nop
    ctx->pc = 0x16ab84u;
    // NOP
    ctx->pc = 0x16ab88u;
}
