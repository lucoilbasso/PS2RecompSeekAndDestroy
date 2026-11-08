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

// Function: entry_001d3240
// Address: 0x1d3240 - 0x1d32f8
void entry_001d3240_0x1d3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3240_0x1d3240");
#endif

    switch (ctx->pc) {
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d32acu: goto label_1d32ac;
        case 0x1d32bcu: goto label_1d32bc;
        case 0x1d32ccu: goto label_1d32cc;
        case 0x1d32dcu: goto label_1d32dc;
        case 0x1d32ecu: goto label_1d32ec;
        default: break;
    }

    ctx->pc = 0x1d3240u;

    // 0x1d3240: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x1d3240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x1d3244: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1d3244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1d3248: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d3248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d324c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D324Cu;
    SET_GPR_U32(ctx, 31, 0x1D3254u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D324Cu, 0x1D3254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3254u;
label_1d3254:
    // 0x1d3254: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1d3254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1d3258: 0xdc25c5f0  ld          $a1, -0x3A10($at)
    ctx->pc = 0x1d3258u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25C5F0u));
    // 0x1d325c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3260: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3260u;
    SET_GPR_U32(ctx, 31, 0x1D3268u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3260u, 0x1D3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3268u;
label_1d3268:
    // 0x1d3268: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1d326c: 0xdc25c5f8  ld          $a1, -0x3A08($at)
    ctx->pc = 0x1d326cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25C5F8u));
    // 0x1d3270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3274: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D3274u;
    SET_GPR_U32(ctx, 31, 0x1D327Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D3274u, 0x1D327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D327Cu;
label_1d327c:
    // 0x1d327c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3280: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3280u;
    SET_GPR_U32(ctx, 31, 0x1D3288u);
    ctx->pc = 0x1D3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3280u;
    // 0x1d3284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3280u, 0x1D3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3288u;
label_1d3288:
    // 0x1d3288: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1d3288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1d328c: 0xdc25c600  ld          $a1, -0x3A00($at)
    ctx->pc = 0x1d328cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25C600u));
    // 0x1d3290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3294: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3294u;
    SET_GPR_U32(ctx, 31, 0x1D329Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3294u, 0x1D329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D329Cu;
label_1d329c:
    // 0x1d329c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d32a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32a4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D32A4u;
    SET_GPR_U32(ctx, 31, 0x1D32ACu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D32A4u, 0x1D32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32ACu;
label_1d32ac:
    // 0x1d32ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d32acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d32b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32b4: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D32B4u;
    SET_GPR_U32(ctx, 31, 0x1D32BCu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D32B4u, 0x1D32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32BCu;
label_1d32bc:
    // 0x1d32bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d32bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d32c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32c4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D32C4u;
    SET_GPR_U32(ctx, 31, 0x1D32CCu);
    ctx->pc = 0x1D32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32C4u;
    // 0x1d32c8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D32C4u, 0x1D32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32CCu;
label_1d32cc:
    // 0x1d32cc: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D32CCu;
    {
        const bool branch_taken_0x1d32cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32CCu;
        // 0x1d32d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32cc) {
            ctx->pc = 0x1D32F8u;
            return;
        }
    }
    ctx->pc = 0x1D32D4u;
    // 0x1d32d4: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D32D4u;
    SET_GPR_U32(ctx, 31, 0x1D32DCu);
    ctx->pc = 0x1D32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32D4u;
    // 0x1d32d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D32D4u, 0x1D32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32DCu;
label_1d32dc:
    // 0x1d32dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d32e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32e4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D32E4u;
    SET_GPR_U32(ctx, 31, 0x1D32ECu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D32E4u, 0x1D32ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32ECu;
label_1d32ec:
    // 0x1d32ec: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d32f0: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x1d32f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x1d32f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d32f8u;
}
