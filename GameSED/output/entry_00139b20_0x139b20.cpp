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

// Function: entry_00139b20
// Address: 0x139b20 - 0x139b7c
void entry_00139b20_0x139b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139b20_0x139b20");
#endif

    switch (ctx->pc) {
        case 0x139b48u: goto label_139b48;
        default: break;
    }

    ctx->pc = 0x139b20u;

    // 0x139b20: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x139b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x139b24: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x139b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x139b28: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x139b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x139b2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x139b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x139b30: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x139b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x139b34: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x139b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x139b38: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x139b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x139b3c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x139b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x139b40: 0xc069236  jal         func_1A48D8
    ctx->pc = 0x139B40u;
    SET_GPR_U32(ctx, 31, 0x139B48u);
    ctx->pc = 0x139B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B40u;
    // 0x139b44: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D8u, 0x139B40u, 0x139B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B48u;
label_139b48:
    // 0x139b48: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x139b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x139b4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b50: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x139b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x139b54: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x139b54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x139b58: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x139b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x139b5c: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x139b5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b60: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x139b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x139b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b68: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x139b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x139b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139B6Cu;
    {
        const bool branch_taken_0x139b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B6Cu;
        // 0x139b70: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b6c) {
            ctx->pc = 0x139B7Cu;
            return;
        }
    }
    ctx->pc = 0x139B74u;
    // 0x139b74: 0xc061920  jal         func_186480
    ctx->pc = 0x139B74u;
    SET_GPR_U32(ctx, 31, 0x139B7Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x139B74u, 0x139B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B7Cu;
}
