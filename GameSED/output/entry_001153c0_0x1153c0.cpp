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

// Function: entry_001153c0
// Address: 0x1153c0 - 0x115410
void entry_001153c0_0x1153c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153c0_0x1153c0");
#endif

    switch (ctx->pc) {
        case 0x1153e8u: goto label_1153e8;
        default: break;
    }

    ctx->pc = 0x1153c0u;

label_1153c0:
    // 0x1153c0: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x1153c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_1153c4:
    // 0x1153c4: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1153c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1153c8:
    // 0x1153c8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1153c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_1153cc:
    // 0x1153cc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_1153d0:
    // 0x1153d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1153d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1153d4:
    // 0x1153d4: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x1153d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
label_1153d8:
    // 0x1153d8: 0x2631d190  addiu       $s1, $s1, -0x2E70
    ctx->pc = 0x1153d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955408));
label_1153dc:
    // 0x1153dc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1153dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1153e0:
    // 0x1153e0: 0xc045360  jal         func_114D80
label_1153e4:
    if (ctx->pc == 0x1153E4u) {
        ctx->pc = 0x1153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153E0u;
        // 0x1153e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153E8u;
        goto label_1153e8;
    }
    ctx->pc = 0x1153E0u;
    SET_GPR_U32(ctx, 31, 0x1153E8u);
    ctx->pc = 0x1153E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153E0u;
    // 0x1153e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1153E0u, 0x1153E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153E8u;
label_1153e8:
    // 0x1153e8: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1153e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1153ec:
    // 0x1153ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1153f0:
    if (ctx->pc == 0x1153F0u) {
        ctx->pc = 0x1153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153ECu;
        // 0x1153f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153F4u;
        goto label_1153f4;
    }
    ctx->pc = 0x1153ECu;
    {
        const bool branch_taken_0x1153ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153ECu;
        // 0x1153f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153ec) {
            ctx->pc = 0x115464u;
            return;
        }
    }
    ctx->pc = 0x1153F4u;
label_1153f4:
    // 0x1153f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1153f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1153f8:
    // 0x1153f8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1153f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1153fc:
    // 0x1153fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_115400:
    // 0x115400: 0x8c634440  lw          $v1, 0x4440($v1)
    ctx->pc = 0x115400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17472)));
label_115404:
    // 0x115404: 0x600008  jr          $v1
label_115408:
    if (ctx->pc == 0x115408u) {
        ctx->pc = 0x11540Cu;
        goto label_11540c;
    }
    ctx->pc = 0x115404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115404u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11540Cu;
label_11540c:
    // 0x11540c: 0x0  nop
    ctx->pc = 0x11540cu;
    // NOP
    ctx->pc = 0x115410u;
}
