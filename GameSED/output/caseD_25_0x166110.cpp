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

// Function: caseD_25
// Address: 0x166110 - 0x166150
void caseD_25_0x166110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_25_0x166110");
#endif

    switch (ctx->pc) {
        case 0x166110u: goto label_166110;
        case 0x166114u: goto label_166114;
        case 0x166118u: goto label_166118;
        case 0x16611cu: goto label_16611c;
        case 0x166120u: goto label_166120;
        case 0x166124u: goto label_166124;
        case 0x166128u: goto label_166128;
        case 0x16612cu: goto label_16612c;
        case 0x166130u: goto label_166130;
        case 0x166134u: goto label_166134;
        case 0x166138u: goto label_166138;
        case 0x16613cu: goto label_16613c;
        case 0x166140u: goto label_166140;
        case 0x166144u: goto label_166144;
        case 0x166148u: goto label_166148;
        case 0x16614cu: goto label_16614c;
        default: break;
    }

    ctx->pc = 0x166110u;

label_166110:
    // 0x166110: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x166110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
label_166114:
    // 0x166114: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x166114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_166118:
    // 0x166118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16611c:
    // 0x16611c: 0x24c673e0  addiu       $a2, $a2, 0x73E0
    ctx->pc = 0x16611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29664));
label_166120:
    // 0x166120: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x166120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_166124:
    // 0x166124: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_166128:
    // 0x166128: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x166128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_16612c:
    // 0x16612c: 0xc0f809  jalr        $a2
label_166130:
    if (ctx->pc == 0x166130u) {
        ctx->pc = 0x166130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16612Cu;
        // 0x166130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166134u;
        goto label_166134;
    }
    ctx->pc = 0x16612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x166134u);
        ctx->pc = 0x166130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16612Cu;
        // 0x166130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16612Cu, 0x166134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166134u;
label_166134:
    // 0x166134: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x166134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166138:
    // 0x166138: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_16613c:
    if (ctx->pc == 0x16613Cu) {
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166138u;
        // 0x16613c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166140u;
        goto label_166140;
    }
    ctx->pc = 0x166138u;
    {
        const bool branch_taken_0x166138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166138u;
        // 0x16613c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166138) {
            ctx->pc = 0x166150u;
            return;
        }
    }
    ctx->pc = 0x166140u;
label_166140:
    // 0x166140: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_166144:
    // 0x166144: 0xc068584  jal         func_1A1610
label_166148:
    if (ctx->pc == 0x166148u) {
        ctx->pc = 0x166148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166144u;
        // 0x166148: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16614Cu;
        goto label_16614c;
    }
    ctx->pc = 0x166144u;
    SET_GPR_U32(ctx, 31, 0x16614Cu);
    ctx->pc = 0x166148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166144u;
    // 0x166148: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x166144u, 0x16614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16614Cu;
label_16614c:
    // 0x16614c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x16614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    ctx->pc = 0x166150u;
}
