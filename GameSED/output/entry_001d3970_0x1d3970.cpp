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

// Function: entry_001d3970
// Address: 0x1d3970 - 0x1d3a1c
void entry_001d3970_0x1d3970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3970_0x1d3970");
#endif

    switch (ctx->pc) {
        case 0x1d3980u: goto label_1d3980;
        case 0x1d398cu: goto label_1d398c;
        case 0x1d3998u: goto label_1d3998;
        case 0x1d39a8u: goto label_1d39a8;
        case 0x1d39b8u: goto label_1d39b8;
        case 0x1d39dcu: goto label_1d39dc;
        case 0x1d39f0u: goto label_1d39f0;
        case 0x1d3a08u: goto label_1d3a08;
        default: break;
    }

    ctx->pc = 0x1d3970u;

    // 0x1d3970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3978: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D3978u;
    SET_GPR_U32(ctx, 31, 0x1D3980u);
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D3978u, 0x1D3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3980u;
label_1d3980:
    // 0x1d3980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3984: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1D3984u;
    SET_GPR_U32(ctx, 31, 0x1D398Cu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1D3984u, 0x1D398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D398Cu;
label_1d398c:
    // 0x1d398c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d398cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3990: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D3990u;
    SET_GPR_U32(ctx, 31, 0x1D3998u);
    ctx->pc = 0x1D3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3990u;
    // 0x1d3994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D3990u, 0x1D3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3998u;
label_1d3998:
    // 0x1d3998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d399c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39a0: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D39A0u;
    SET_GPR_U32(ctx, 31, 0x1D39A8u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D39A0u, 0x1D39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39A8u;
label_1d39a8:
    // 0x1d39a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39b0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D39B0u;
    SET_GPR_U32(ctx, 31, 0x1D39B8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D39B0u, 0x1D39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39B8u;
label_1d39b8:
    // 0x1d39b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d39b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39bc: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1d39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d39c0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1d39c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d39c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d39c8: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D39C8u;
    {
        const bool branch_taken_0x1d39c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39C8u;
        // 0x1d39cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39c8) {
            ctx->pc = 0x1D3A68u;
            return;
        }
    }
    ctx->pc = 0x1D39D0u;
    // 0x1d39d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d39d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39d4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D39D4u;
    SET_GPR_U32(ctx, 31, 0x1D39DCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D39D4u, 0x1D39DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39DCu;
label_1d39dc:
    // 0x1d39dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d39dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d39e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d39e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e8: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D39E8u;
    SET_GPR_U32(ctx, 31, 0x1D39F0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D39E8u, 0x1D39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39F0u;
label_1d39f0:
    // 0x1d39f0: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D39F0u;
    {
        const bool branch_taken_0x1d39f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39F0u;
        // 0x1d39f4: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39f0) {
            ctx->pc = 0x1D3A1Cu;
            return;
        }
    }
    ctx->pc = 0x1D39F8u;
    // 0x1d39f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d39f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d39fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a00: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D3A00u;
    SET_GPR_U32(ctx, 31, 0x1D3A08u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D3A00u, 0x1D3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A08u;
label_1d3a08:
    // 0x1d3a08: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1D3A08u;
    {
        const bool branch_taken_0x1d3a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A08u;
        // 0x1d3a0c: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a08) {
            ctx->pc = 0x1D41D4u;
            return;
        }
    }
    ctx->pc = 0x1D3A10u;
    // 0x1d3a10: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1d3a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d3a14: 0x104001ef  beqz        $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x1D3A14u;
    {
        const bool branch_taken_0x1d3a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A14u;
        // 0x1d3a18: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a14) {
            ctx->pc = 0x1D41D4u;
            return;
        }
    }
    ctx->pc = 0x1D3A1Cu;
}
