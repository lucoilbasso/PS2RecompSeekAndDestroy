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

// Function: entry_001553b8
// Address: 0x1553b8 - 0x155418
void entry_001553b8_0x1553b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001553b8_0x1553b8");
#endif

    switch (ctx->pc) {
        case 0x1553e4u: goto label_1553e4;
        case 0x1553f0u: goto label_1553f0;
        default: break;
    }

    ctx->pc = 0x1553b8u;

    // 0x1553b8: 0x264508a0  addiu       $a1, $s2, 0x8A0
    ctx->pc = 0x1553b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2208));
    // 0x1553bc: 0x8f839140  lw          $v1, -0x6EC0($gp)
    ctx->pc = 0x1553bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
    // 0x1553c0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1553c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553c8: 0x8f86913c  lw          $a2, -0x6EC4($gp)
    ctx->pc = 0x1553c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938940)));
    // 0x1553cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1553ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553d0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1553d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1553d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1553d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1553d8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1553d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1553dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1553DCu;
    SET_GPR_U32(ctx, 31, 0x1553E4u);
    ctx->pc = 0x1553E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553DCu;
    // 0x1553e0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1553DCu, 0x1553E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553E4u;
label_1553e4:
    // 0x1553e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1553E8u;
    SET_GPR_U32(ctx, 31, 0x1553F0u);
    ctx->pc = 0x1553ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553E8u;
    // 0x1553ec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1553E8u, 0x1553F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553F0u;
label_1553f0:
    // 0x1553f0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1553f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1553f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1553f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1553f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1553f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1553fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1553fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155400: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x155400u;
    {
        const bool branch_taken_0x155400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x155400) {
            ctx->pc = 0x155404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155400u;
            // 0x155404: 0x8e42089c  lw          $v0, 0x89C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155454u;
            return;
        }
    }
    ctx->pc = 0x155408u;
    // 0x155408: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15540c: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x15540cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x155410: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x155414: 0x0  nop
    ctx->pc = 0x155414u;
    // NOP
    ctx->pc = 0x155418u;
}
