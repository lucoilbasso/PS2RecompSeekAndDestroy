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

// Function: entry_001942cc
// Address: 0x1942cc - 0x19432c
void entry_001942cc_0x1942cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001942cc_0x1942cc");
#endif

    switch (ctx->pc) {
        case 0x1942d4u: goto label_1942d4;
        case 0x194318u: goto label_194318;
        default: break;
    }

    ctx->pc = 0x1942ccu;

    // 0x1942cc: 0xc061422  jal         func_185088
    ctx->pc = 0x1942CCu;
    SET_GPR_U32(ctx, 31, 0x1942D4u);
    ctx->pc = 0x1942D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1942CCu;
    // 0x1942d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1942CCu, 0x1942D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942D4u;
label_1942d4:
    // 0x1942d4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x1942d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1942d8: 0x5040007f  beql        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x1942D8u;
    {
        const bool branch_taken_0x1942d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942d8) {
            ctx->pc = 0x1942DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942D8u;
            // 0x1942dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1944D8u;
            return;
        }
    }
    ctx->pc = 0x1942E0u;
    // 0x1942e0: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x1942e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1942e4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1942e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1942e8: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1942E8u;
    {
        const bool branch_taken_0x1942e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1942ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942E8u;
        // 0x1942ec: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942e8) {
            ctx->pc = 0x1944D4u;
            return;
        }
    }
    ctx->pc = 0x1942F0u;
    // 0x1942f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1942f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1942f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1942f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1942f8: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x1942F8u;
    {
        const bool branch_taken_0x1942f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1942f8) {
            ctx->pc = 0x1942FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1942F8u;
            // 0x1942fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1944D8u;
            return;
        }
    }
    ctx->pc = 0x194300u;
    // 0x194300: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x194300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x194304: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x194304u;
    {
        const bool branch_taken_0x194304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194304) {
            ctx->pc = 0x194308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194304u;
            // 0x194308: 0x96220150  lhu         $v0, 0x150($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194340u;
            return;
        }
    }
    ctx->pc = 0x19430Cu;
    // 0x19430c: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x19430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x194310: 0xc05fec2  jal         func_17FB08
    ctx->pc = 0x194310u;
    SET_GPR_U32(ctx, 31, 0x194318u);
    ctx->pc = 0x194314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194310u;
    // 0x194314: 0x26300160  addiu       $s0, $s1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x194310u, 0x194318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194318u;
label_194318:
    // 0x194318: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x194318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19431c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19431Cu;
    {
        const bool branch_taken_0x19431c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19431Cu;
        // 0x194320: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19431c) {
            ctx->pc = 0x19432Cu;
            return;
        }
    }
    ctx->pc = 0x194324u;
    // 0x194324: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x194324u;
    SET_GPR_U32(ctx, 31, 0x19432Cu);
    ctx->pc = 0x194328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194324u;
    // 0x194328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x194324u, 0x19432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19432Cu;
}
