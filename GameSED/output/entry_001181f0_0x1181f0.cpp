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

// Function: entry_001181f0
// Address: 0x1181f0 - 0x118230
void entry_001181f0_0x1181f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001181f0_0x1181f0");
#endif

    switch (ctx->pc) {
        case 0x11820cu: goto label_11820c;
        default: break;
    }

    ctx->pc = 0x1181f0u;

label_1181f0:
    // 0x1181f0: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x1181f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_1181f4:
    // 0x1181f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1181f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1181f8:
    // 0x1181f8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1181f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_1181fc:
    // 0x1181fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1181fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_118200:
    // 0x118200: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x118200u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_118204:
    // 0x118204: 0xc045360  jal         func_114D80
label_118208:
    if (ctx->pc == 0x118208u) {
        ctx->pc = 0x118208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118204u;
        // 0x118208: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11820Cu;
        goto label_11820c;
    }
    ctx->pc = 0x118204u;
    SET_GPR_U32(ctx, 31, 0x11820Cu);
    ctx->pc = 0x118208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118204u;
    // 0x118208: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x118204u, 0x11820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11820Cu;
label_11820c:
    // 0x11820c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11820cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_118210:
    // 0x118210: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_118214:
    if (ctx->pc == 0x118214u) {
        ctx->pc = 0x118214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118210u;
        // 0x118214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118218u;
        goto label_118218;
    }
    ctx->pc = 0x118210u;
    {
        const bool branch_taken_0x118210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118210u;
        // 0x118214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118210) {
            ctx->pc = 0x118284u;
            return;
        }
    }
    ctx->pc = 0x118218u;
label_118218:
    // 0x118218: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x118218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11821c:
    // 0x11821c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_118220:
    // 0x118220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118224:
    // 0x118224: 0x8c6346f0  lw          $v1, 0x46F0($v1)
    ctx->pc = 0x118224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18160)));
label_118228:
    // 0x118228: 0x600008  jr          $v1
label_11822c:
    if (ctx->pc == 0x11822Cu) {
        ctx->pc = 0x118230u;
        goto label_fallthrough_0x118228;
    }
    ctx->pc = 0x118228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118228u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118228:
    ctx->pc = 0x118230u;
}
