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

// Function: entry_00187238
// Address: 0x187238 - 0x187270
void entry_00187238_0x187238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187238_0x187238");
#endif

    switch (ctx->pc) {
        case 0x187240u: goto label_187240;
        default: break;
    }

    ctx->pc = 0x187238u;

label_187238:
    // 0x187238: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x187238u;
    SET_GPR_U32(ctx, 31, 0x187240u);
    ctx->pc = 0x18723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187238u;
    // 0x18723c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187238u, 0x187240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187240u;
label_187240:
    // 0x187240: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x187244: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x187244u;
    {
        const bool branch_taken_0x187244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187244u;
        // 0x187248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187244) {
            ctx->pc = 0x187238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187238;
        }
    }
    ctx->pc = 0x18724Cu;
    // 0x18724c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18724cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187250: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187250u;
    {
        const bool branch_taken_0x187250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187250u;
        // 0x187254: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187250) {
            ctx->pc = 0x187270u;
            return;
        }
    }
    ctx->pc = 0x187258u;
    // 0x187258: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18725c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x187260: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187264: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x187264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x187268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187268u;
    {
        const bool branch_taken_0x187268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187268u;
        // 0x18726c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187268) {
            ctx->pc = 0x187278u;
            return;
        }
    }
    ctx->pc = 0x187270u;
}
