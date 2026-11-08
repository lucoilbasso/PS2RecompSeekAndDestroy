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

// Function: entry_0012f5e8
// Address: 0x12f5e8 - 0x12f624
void entry_0012f5e8_0x12f5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f5e8_0x12f5e8");
#endif

    switch (ctx->pc) {
        case 0x12f60cu: goto label_12f60c;
        default: break;
    }

    ctx->pc = 0x12f5e8u;

    // 0x12f5e8: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x12f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x12f5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5f0: 0x8c64018c  lw          $a0, 0x18C($v1)
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x12f5f4: 0x10800247  beqz        $a0, . + 4 + (0x247 << 2)
    ctx->pc = 0x12F5F4u;
    {
        const bool branch_taken_0x12f5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5F4u;
        // 0x12f5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5f4) {
            ctx->pc = 0x12FF14u;
            return;
        }
    }
    ctx->pc = 0x12F5FCu;
    // 0x12f5fc: 0x8e670140  lw          $a3, 0x140($s3)
    ctx->pc = 0x12f5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x12f600: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f604: 0xc04b3f6  jal         func_12CFD8
    ctx->pc = 0x12F604u;
    SET_GPR_U32(ctx, 31, 0x12F60Cu);
    ctx->pc = 0x12F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F604u;
    // 0x12f608: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFD8u, 0x12F604u, 0x12F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F60Cu;
label_12f60c:
    // 0x12f60c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f610: 0x52800241  beql        $s4, $zero, . + 4 + (0x241 << 2)
    ctx->pc = 0x12F610u;
    {
        const bool branch_taken_0x12f610 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f610) {
            ctx->pc = 0x12F614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F610u;
            // 0x12f614: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FF18u;
            return;
        }
    }
    ctx->pc = 0x12F618u;
    // 0x12f618: 0x8e620140  lw          $v0, 0x140($s3)
    ctx->pc = 0x12f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x12f61c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F61Cu;
    {
        const bool branch_taken_0x12f61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f61c) {
            ctx->pc = 0x12F620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F61Cu;
            // 0x12f620: 0xae740140  sw          $s4, 0x140($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F624u;
            return;
        }
    }
    ctx->pc = 0x12F624u;
}
