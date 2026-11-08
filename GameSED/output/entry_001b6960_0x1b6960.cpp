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

// Function: entry_001b6960
// Address: 0x1b6960 - 0x1b6a14
void entry_001b6960_0x1b6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6960_0x1b6960");
#endif

    switch (ctx->pc) {
        case 0x1b69bcu: goto label_1b69bc;
        case 0x1b69c8u: goto label_1b69c8;
        case 0x1b69d4u: goto label_1b69d4;
        case 0x1b69e4u: goto label_1b69e4;
        case 0x1b69f0u: goto label_1b69f0;
        case 0x1b6a00u: goto label_1b6a00;
        case 0x1b6a0cu: goto label_1b6a0c;
        default: break;
    }

    ctx->pc = 0x1b6960u;

    // 0x1b6960: 0x2546b640  addiu       $a2, $t2, -0x49C0
    ctx->pc = 0x1b6960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294948416));
    // 0x1b6964: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b6964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6968: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1b6968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1b696c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6970: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b6974: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1b6974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1b6978: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1b6978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1b697c: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1b697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1b6980: 0xdd42b640  ld          $v0, -0x49C0($t2)
    ctx->pc = 0x1b6980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 4294948416)));
    // 0x1b6984: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x1b6984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1b6988: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x1b6988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x1b698c: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1b698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b6990: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b6990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1b6994: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b6994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b6998: 0xfd42b640  sd          $v0, -0x49C0($t2)
    ctx->pc = 0x1b6998u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294948416), GPR_U64(ctx, 2));
    // 0x1b699c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b699cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69a0: 0xa145b640  sb          $a1, -0x49C0($t2)
    ctx->pc = 0x1b69a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294948416), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b69a4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1b69a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1b69a8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1b69a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x1b69ac: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1b69acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1b69b0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1b69b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1b69b4: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B69B4u;
    SET_GPR_U32(ctx, 31, 0x1B69BCu);
    ctx->pc = 0x1B69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69B4u;
    // 0x1b69b8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B69B4u, 0x1B69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69BCu;
label_1b69bc:
    // 0x1b69bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b69c0: 0xc06be18  jal         func_1AF860
    ctx->pc = 0x1B69C0u;
    SET_GPR_U32(ctx, 31, 0x1B69C8u);
    ctx->pc = 0x1B69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69C0u;
    // 0x1b69c4: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF860u, 0x1B69C0u, 0x1B69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69C8u;
label_1b69c8:
    // 0x1b69c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b69c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69cc: 0xc06be08  jal         func_1AF820
    ctx->pc = 0x1B69CCu;
    SET_GPR_U32(ctx, 31, 0x1B69D4u);
    ctx->pc = 0x1B69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69CCu;
    // 0x1b69d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF820u, 0x1B69CCu, 0x1B69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69D4u;
label_1b69d4:
    // 0x1b69d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B69D4u;
    {
        const bool branch_taken_0x1b69d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69D4u;
        // 0x1b69d8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69d4) {
            ctx->pc = 0x1B6A14u;
            return;
        }
    }
    ctx->pc = 0x1B69DCu;
    // 0x1b69dc: 0xc06be18  jal         func_1AF860
    ctx->pc = 0x1B69DCu;
    SET_GPR_U32(ctx, 31, 0x1B69E4u);
    ctx->pc = 0x1B69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69DCu;
    // 0x1b69e0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF860u, 0x1B69DCu, 0x1B69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69E4u;
label_1b69e4:
    // 0x1b69e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b69e8: 0xc06be18  jal         func_1AF860
    ctx->pc = 0x1B69E8u;
    SET_GPR_U32(ctx, 31, 0x1B69F0u);
    ctx->pc = 0x1B69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69E8u;
    // 0x1b69ec: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF860u, 0x1B69E8u, 0x1B69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69F0u;
label_1b69f0:
    // 0x1b69f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b69f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b69f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b69f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69f8: 0xc06be18  jal         func_1AF860
    ctx->pc = 0x1B69F8u;
    SET_GPR_U32(ctx, 31, 0x1B6A00u);
    ctx->pc = 0x1B69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69F8u;
    // 0x1b69fc: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF860u, 0x1B69F8u, 0x1B6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A00u;
label_1b6a00:
    // 0x1b6a00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6a04: 0xc06be18  jal         func_1AF860
    ctx->pc = 0x1B6A04u;
    SET_GPR_U32(ctx, 31, 0x1B6A0Cu);
    ctx->pc = 0x1B6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A04u;
    // 0x1b6a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF860u, 0x1B6A04u, 0x1B6A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A0Cu;
label_1b6a0c:
    // 0x1b6a0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6A0Cu;
    {
        const bool branch_taken_0x1b6a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A0Cu;
        // 0x1b6a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a0c) {
            ctx->pc = 0x1B6A18u;
            return;
        }
    }
    ctx->pc = 0x1B6A14u;
}
