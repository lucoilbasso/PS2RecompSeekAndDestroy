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

// Function: entry_001292f4
// Address: 0x1292f4 - 0x129348
void entry_001292f4_0x1292f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001292f4_0x1292f4");
#endif

    switch (ctx->pc) {
        case 0x129310u: goto label_129310;
        case 0x129338u: goto label_129338;
        case 0x129340u: goto label_129340;
        default: break;
    }

    ctx->pc = 0x1292f4u;

    // 0x1292f4: 0x15e00020  bnez        $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x1292F4u;
    {
        const bool branch_taken_0x1292f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292F4u;
        // 0x1292f8: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292f4) {
            ctx->pc = 0x129378u;
            return;
        }
    }
    ctx->pc = 0x1292FCu;
    // 0x1292fc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x129300: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129300u;
    {
        const bool branch_taken_0x129300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129300u;
        // 0x129304: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129300) {
            ctx->pc = 0x129348u;
            return;
        }
    }
    ctx->pc = 0x129308u;
    // 0x129308: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129308u;
    SET_GPR_U32(ctx, 31, 0x129310u);
    ctx->pc = 0x12930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129308u;
    // 0x12930c: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129308u, 0x129310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129310u;
label_129310:
    // 0x129310: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x129314: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x129314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x129318: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x129318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x12931c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12931cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129320: 0xaec30018  sw          $v1, 0x18($s6)
    ctx->pc = 0x129320u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 3));
    // 0x129324: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x129324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x129328: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x129328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x12932c: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x12932cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x129330: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129330u;
    SET_GPR_U32(ctx, 31, 0x129338u);
    ctx->pc = 0x129334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129330u;
    // 0x129334: 0xae56008c  sw          $s6, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129330u, 0x129338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129338u;
label_129338:
    // 0x129338: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129338u;
    SET_GPR_U32(ctx, 31, 0x129340u);
    ctx->pc = 0x12933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129338u;
    // 0x12933c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129338u, 0x129340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129340u;
label_129340:
    // 0x129340: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129340u;
        // 0x129344: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129340) {
            ctx->pc = 0x129468u;
            return;
        }
    }
    ctx->pc = 0x129348u;
}
