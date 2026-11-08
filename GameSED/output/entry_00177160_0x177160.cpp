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

// Function: entry_00177160
// Address: 0x177160 - 0x177198
void entry_00177160_0x177160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177160_0x177160");
#endif

    switch (ctx->pc) {
        case 0x177168u: goto label_177168;
        default: break;
    }

    ctx->pc = 0x177160u;

label_177160:
    // 0x177160: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x177160u;
    SET_GPR_U32(ctx, 31, 0x177168u);
    ctx->pc = 0x177164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177160u;
    // 0x177164: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x177160u, 0x177168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177168u;
label_177168:
    // 0x177168: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x17716c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17716Cu;
    {
        const bool branch_taken_0x17716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x177170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17716Cu;
        // 0x177170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17716c) {
            ctx->pc = 0x177160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177160;
        }
    }
    ctx->pc = 0x177174u;
    // 0x177174: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x177174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177178: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x177178u;
    {
        const bool branch_taken_0x177178 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177178u;
        // 0x17717c: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177178) {
            ctx->pc = 0x177198u;
            return;
        }
    }
    ctx->pc = 0x177180u;
    // 0x177180: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x177180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x177184: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x177184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x177188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x177188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17718c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x17718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x177190: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177190u;
    {
        const bool branch_taken_0x177190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177190u;
        // 0x177194: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177190) {
            ctx->pc = 0x1771A8u;
            return;
        }
    }
    ctx->pc = 0x177198u;
}
