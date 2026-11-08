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

// Function: entry_00121798
// Address: 0x121798 - 0x1217d8
void entry_00121798_0x121798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121798_0x121798");
#endif

    switch (ctx->pc) {
        case 0x1217b4u: goto label_1217b4;
        case 0x1217c0u: goto label_1217c0;
        default: break;
    }

    ctx->pc = 0x121798u;

    // 0x121798: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x121798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12179c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1217a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1217a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1217a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1217a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1217a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1217ac: 0xc0478ea  jal         func_11E3A8
    ctx->pc = 0x1217ACu;
    SET_GPR_U32(ctx, 31, 0x1217B4u);
    ctx->pc = 0x1217B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217ACu;
    // 0x1217b0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3A8u, 0x1217ACu, 0x1217B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217B4u;
label_1217b4:
    // 0x1217b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1217b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217b8: 0xc04844a  jal         func_121128
    ctx->pc = 0x1217B8u;
    SET_GPR_U32(ctx, 31, 0x1217C0u);
    ctx->pc = 0x1217BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217B8u;
    // 0x1217bc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1217B8u, 0x1217C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217C0u;
label_1217c0:
    // 0x1217c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1217C0u;
    {
        const bool branch_taken_0x1217c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217C0u;
        // 0x1217c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217c0) {
            ctx->pc = 0x1217D8u;
            return;
        }
    }
    ctx->pc = 0x1217C8u;
    // 0x1217c8: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1217cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1217CCu;
    {
        const bool branch_taken_0x1217cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217CCu;
        // 0x1217d0: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217cc) {
            ctx->pc = 0x1217F8u;
            return;
        }
    }
    ctx->pc = 0x1217D4u;
    // 0x1217d4: 0x0  nop
    ctx->pc = 0x1217d4u;
    // NOP
    ctx->pc = 0x1217d8u;
}
