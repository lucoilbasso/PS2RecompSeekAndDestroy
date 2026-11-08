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

// Function: entry_0018599c
// Address: 0x18599c - 0x1859d0
void entry_0018599c_0x18599c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018599c_0x18599c");
#endif

    switch (ctx->pc) {
        case 0x1859b4u: goto label_1859b4;
        default: break;
    }

    ctx->pc = 0x18599cu;

    // 0x18599c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859a0: 0x54800032  bnel        $a0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1859A0u;
    {
        const bool branch_taken_0x1859a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1859a0) {
            ctx->pc = 0x1859A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1859A0u;
            // 0x1859a4: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A6Cu;
            return;
        }
    }
    ctx->pc = 0x1859A8u;
    // 0x1859a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1859a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859ac: 0xc069028  jal         func_1A40A0
    ctx->pc = 0x1859ACu;
    SET_GPR_U32(ctx, 31, 0x1859B4u);
    ctx->pc = 0x1859B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859ACu;
    // 0x1859b0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A40A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A40A0u, 0x1859ACu, 0x1859B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859B4u;
label_1859b4:
    // 0x1859b4: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1859b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1859b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859bc: 0x111603  sra         $v0, $s1, 24
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 24));
    // 0x1859c0: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x1859c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1859c4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1859C4u;
    {
        const bool branch_taken_0x1859c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859C4u;
        // 0x1859c8: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859c4) {
            ctx->pc = 0x185A28u;
            return;
        }
    }
    ctx->pc = 0x1859CCu;
    // 0x1859cc: 0x3c160100  lui         $s6, 0x100
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)256 << 16));
    ctx->pc = 0x1859d0u;
}
