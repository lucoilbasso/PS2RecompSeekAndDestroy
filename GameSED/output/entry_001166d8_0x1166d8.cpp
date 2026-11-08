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

// Function: entry_001166d8
// Address: 0x1166d8 - 0x116734
void entry_001166d8_0x1166d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001166d8_0x1166d8");
#endif

    switch (ctx->pc) {
        case 0x1166f8u: goto label_1166f8;
        case 0x116720u: goto label_116720;
        default: break;
    }

    ctx->pc = 0x1166d8u;

    // 0x1166d8: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x1166d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x1166dc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1166dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1166e0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1166e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1166e4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1166e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1166e8: 0x2470c540  addiu       $s0, $v1, -0x3AC0
    ctx->pc = 0x1166e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x1166ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1166ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1166f0: 0xc0458fc  jal         func_1163F0
    ctx->pc = 0x1166F0u;
    SET_GPR_U32(ctx, 31, 0x1166F8u);
    ctx->pc = 0x1166F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166F0u;
    // 0x1166f4: 0x8c440fe8  lw          $a0, 0xFE8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163F0u, 0x1166F0u, 0x1166F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166F8u;
label_1166f8:
    // 0x1166f8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1166F8u;
    {
        const bool branch_taken_0x1166f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1166FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F8u;
        // 0x1166fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166f8) {
            ctx->pc = 0x116738u;
            return;
        }
    }
    ctx->pc = 0x116700u;
    // 0x116700: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x116700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116704: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x116704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x116708: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11670c: 0x24844560  addiu       $a0, $a0, 0x4560
    ctx->pc = 0x11670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17760));
    // 0x116710: 0xb11818  mult        $v1, $a1, $s1
    ctx->pc = 0x116710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x116714: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x116714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x116718: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x116718u;
    SET_GPR_U32(ctx, 31, 0x116720u);
    ctx->pc = 0x11671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116718u;
    // 0x11671c: 0x8c460fe8  lw          $a2, 0xFE8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x116718u, 0x116720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116720u;
label_116720:
    // 0x116720: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x116720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x116724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116728: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58
    ctx->pc = 0x116728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    // 0x11672c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11672Cu;
    SET_GPR_U32(ctx, 31, 0x116734u);
    ctx->pc = 0x116730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11672Cu;
    // 0x116730: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11672Cu, 0x116734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116734u;
}
