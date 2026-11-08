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

// Function: entry_001072d4
// Address: 0x1072d4 - 0x107320
void entry_001072d4_0x1072d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001072d4_0x1072d4");
#endif

    switch (ctx->pc) {
        case 0x1072e8u: goto label_1072e8;
        case 0x1072f4u: goto label_1072f4;
        case 0x107318u: goto label_107318;
        default: break;
    }

    ctx->pc = 0x1072d4u;

    // 0x1072d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1072d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1072d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1072d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1072dc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1072dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1072e0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1072E0u;
    SET_GPR_U32(ctx, 31, 0x1072E8u);
    ctx->pc = 0x1072E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072E0u;
    // 0x1072e4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1072E0u, 0x1072E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072E8u;
label_1072e8:
    // 0x1072e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1072e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072ec: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1072ECu;
    SET_GPR_U32(ctx, 31, 0x1072F4u);
    ctx->pc = 0x1072F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072ECu;
    // 0x1072f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1072ECu, 0x1072F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072F4u;
label_1072f4:
    // 0x1072f4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1072f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1072f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x107300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107304: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107304u;
    {
        const bool branch_taken_0x107304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x107308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107304u;
        // 0x107308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107304) {
            ctx->pc = 0x107320u;
            return;
        }
    }
    ctx->pc = 0x10730Cu;
    // 0x10730c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107310: 0xc06135e  jal         func_184D78
    ctx->pc = 0x107310u;
    SET_GPR_U32(ctx, 31, 0x107318u);
    ctx->pc = 0x107314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107310u;
    // 0x107314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D78u, 0x107310u, 0x107318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107318u;
label_107318:
    // 0x107318: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x107318u;
    {
        const bool branch_taken_0x107318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107318u;
        // 0x10731c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107318) {
            ctx->pc = 0x1073C4u;
            return;
        }
    }
    ctx->pc = 0x107320u;
}
