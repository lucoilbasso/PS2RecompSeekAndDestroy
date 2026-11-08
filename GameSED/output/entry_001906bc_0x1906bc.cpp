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

// Function: entry_001906bc
// Address: 0x1906bc - 0x190700
void entry_001906bc_0x1906bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001906bc_0x1906bc");
#endif

    switch (ctx->pc) {
        case 0x1906c8u: goto label_1906c8;
        case 0x1906e4u: goto label_1906e4;
        default: break;
    }

    ctx->pc = 0x1906bcu;

    // 0x1906bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1906bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1906c0: 0xc0641e6  jal         func_190798
    ctx->pc = 0x1906C0u;
    SET_GPR_U32(ctx, 31, 0x1906C8u);
    ctx->pc = 0x1906C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906C0u;
    // 0x1906c4: 0x8e050164  lw          $a1, 0x164($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190798u, 0x1906C0u, 0x1906C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906C8u;
label_1906c8:
    // 0x1906c8: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x1906cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1906d0: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1906D0u;
    {
        const bool branch_taken_0x1906d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1906d0) {
            ctx->pc = 0x1906D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1906D0u;
            // 0x1906d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190788u;
            return;
        }
    }
    ctx->pc = 0x1906D8u;
    // 0x1906d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1906d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906dc: 0xc06437a  jal         func_190DE8
    ctx->pc = 0x1906DCu;
    SET_GPR_U32(ctx, 31, 0x1906E4u);
    ctx->pc = 0x1906E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906DCu;
    // 0x1906e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190DE8u, 0x1906DCu, 0x1906E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906E4u;
label_1906e4:
    // 0x1906e4: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x1906e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1906e8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1906e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1906ec: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1906ECu;
    {
        const bool branch_taken_0x1906ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1906F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906ECu;
        // 0x1906f0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906ec) {
            ctx->pc = 0x190784u;
            return;
        }
    }
    ctx->pc = 0x1906F4u;
    // 0x1906f4: 0x8e250278  lw          $a1, 0x278($s1)
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1906f8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1906F8u;
    {
        const bool branch_taken_0x1906f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906f8) {
            ctx->pc = 0x1906FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1906F8u;
            // 0x1906fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190700u;
            return;
        }
    }
    ctx->pc = 0x190700u;
}
