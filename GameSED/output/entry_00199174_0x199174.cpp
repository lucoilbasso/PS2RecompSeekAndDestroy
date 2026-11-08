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

// Function: entry_00199174
// Address: 0x199174 - 0x1991d0
void entry_00199174_0x199174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199174_0x199174");
#endif

    switch (ctx->pc) {
        case 0x199188u: goto label_199188;
        case 0x1991a4u: goto label_1991a4;
        default: break;
    }

    ctx->pc = 0x199174u;

    // 0x199174: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x199174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x199178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19917c: 0x8c52001c  lw          $s2, 0x1C($v0)
    ctx->pc = 0x19917cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x199180: 0xc0684fe  jal         func_1A13F8
    ctx->pc = 0x199180u;
    SET_GPR_U32(ctx, 31, 0x199188u);
    ctx->pc = 0x199184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199180u;
    // 0x199184: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x199180u, 0x199188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199188u;
label_199188:
    // 0x199188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19918c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19918cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x199190: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x199190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x199194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199198: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x199198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x19919c: 0xc05dcd0  jal         func_177340
    ctx->pc = 0x19919Cu;
    SET_GPR_U32(ctx, 31, 0x1991A4u);
    ctx->pc = 0x1991A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19919Cu;
    // 0x1991a0: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177340u, 0x19919Cu, 0x1991A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991A4u;
label_1991a4:
    // 0x1991a4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1991a8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1991A8u;
    {
        const bool branch_taken_0x1991a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991A8u;
        // 0x1991ac: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991a8) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x1991B0u;
    // 0x1991b0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1991b4: 0x3c14ffbf  lui         $s4, 0xFFBF
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65471 << 16));
    // 0x1991b8: 0x2457d640  addiu       $s7, $v0, -0x29C0
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
    // 0x1991bc: 0x2473d650  addiu       $s3, $v1, -0x29B0
    ctx->pc = 0x1991bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1991c0: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1991c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1991c4: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1991c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1991c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991cc: 0x0  nop
    ctx->pc = 0x1991ccu;
    // NOP
    ctx->pc = 0x1991d0u;
}
