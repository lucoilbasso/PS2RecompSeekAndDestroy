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

// Function: entry_00139674
// Address: 0x139674 - 0x1396d8
void entry_00139674_0x139674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139674_0x139674");
#endif

    switch (ctx->pc) {
        case 0x139684u: goto label_139684;
        case 0x139698u: goto label_139698;
        case 0x1396acu: goto label_1396ac;
        default: break;
    }

    ctx->pc = 0x139674u;

    // 0x139674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139678: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x139678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13967c: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13967Cu;
    SET_GPR_U32(ctx, 31, 0x139684u);
    ctx->pc = 0x139680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13967Cu;
    // 0x139680: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13967Cu, 0x139684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139684u;
label_139684:
    // 0x139684: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x139684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x139688: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13968c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139690: 0xc06164c  jal         func_185930
    ctx->pc = 0x139690u;
    SET_GPR_U32(ctx, 31, 0x139698u);
    ctx->pc = 0x139694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139690u;
    // 0x139694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x139690u, 0x139698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139698u;
label_139698:
    // 0x139698: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13969c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1396a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396a4: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1396A4u;
    SET_GPR_U32(ctx, 31, 0x1396ACu);
    ctx->pc = 0x1396A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396A4u;
    // 0x1396a8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1396A4u, 0x1396ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396ACu;
label_1396ac:
    // 0x1396ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1396acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396b0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x1396b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1396b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1396b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1396b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1396bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1396c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1396c4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1396c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1396c8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1396C8u;
    {
        const bool branch_taken_0x1396c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1396CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396C8u;
        // 0x1396cc: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396c8) {
            ctx->pc = 0x1396D8u;
            return;
        }
    }
    ctx->pc = 0x1396D0u;
    // 0x1396d0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1396d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1396d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1396d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1396d8u;
}
