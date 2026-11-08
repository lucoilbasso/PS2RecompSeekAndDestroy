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

// Function: entry_00197178
// Address: 0x197178 - 0x1971b0
void entry_00197178_0x197178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197178_0x197178");
#endif

    switch (ctx->pc) {
        case 0x197180u: goto label_197180;
        default: break;
    }

    ctx->pc = 0x197178u;

label_197178:
    // 0x197178: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x197178u;
    SET_GPR_U32(ctx, 31, 0x197180u);
    ctx->pc = 0x19717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197178u;
    // 0x19717c: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x197178u, 0x197180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197180u;
label_197180:
    // 0x197180: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x197180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x197184: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x197184u;
    {
        const bool branch_taken_0x197184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x197188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197184u;
        // 0x197188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197184) {
            ctx->pc = 0x197178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197178;
        }
    }
    ctx->pc = 0x19718Cu;
    // 0x19718c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19718cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197190: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x197190u;
    {
        const bool branch_taken_0x197190 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197190u;
        // 0x197194: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197190) {
            ctx->pc = 0x1971B0u;
            return;
        }
    }
    ctx->pc = 0x197198u;
    // 0x197198: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19719c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1971a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1971a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1971a4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1971a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1971a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1971A8u;
    {
        const bool branch_taken_0x1971a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A8u;
        // 0x1971ac: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971a8) {
            ctx->pc = 0x1971C0u;
            return;
        }
    }
    ctx->pc = 0x1971B0u;
}
