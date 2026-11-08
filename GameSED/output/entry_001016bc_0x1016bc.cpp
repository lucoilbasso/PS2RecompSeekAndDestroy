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

// Function: entry_001016bc
// Address: 0x1016bc - 0x101750
void entry_001016bc_0x1016bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001016bc_0x1016bc");
#endif

    switch (ctx->pc) {
        case 0x1016d0u: goto label_1016d0;
        case 0x1016e0u: goto label_1016e0;
        case 0x1016e8u: goto label_1016e8;
        default: break;
    }

    ctx->pc = 0x1016bcu;

    // 0x1016bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1016bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1016c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1016c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c8: 0xc05f768  jal         func_17DDA0
    ctx->pc = 0x1016C8u;
    SET_GPR_U32(ctx, 31, 0x1016D0u);
    ctx->pc = 0x1016CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016C8u;
    // 0x1016cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DDA0u, 0x1016C8u, 0x1016D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016D0u;
label_1016d0:
    // 0x1016d0: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x1016d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1016d4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1016d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1016d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1016D8u;
    SET_GPR_U32(ctx, 31, 0x1016E0u);
    ctx->pc = 0x1016DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016D8u;
    // 0x1016dc: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1016D8u, 0x1016E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016E0u;
label_1016e0:
    // 0x1016e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1016E0u;
    SET_GPR_U32(ctx, 31, 0x1016E8u);
    ctx->pc = 0x1016E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016E0u;
    // 0x1016e4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1016E0u, 0x1016E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016E8u;
label_1016e8:
    // 0x1016e8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1016e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1016ec: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1016ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1016f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1016f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1016f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1016f8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1016f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1016fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1016fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x101700: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x101700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x101704: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x101704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x101708: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x101708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x10170c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x10170cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x101710: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x101710u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x101714: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x101714u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x101718: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x101718u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x10171c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x10171cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x101720: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x101720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x101724: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x101724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x101728: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x101728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x10172c: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x10172cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x101730: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x101730u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x101734: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x101734u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x101738: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x101738u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x10173c: 0xdca20030  ld          $v0, 0x30($a1)
    ctx->pc = 0x10173cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x101740: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x101740u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x101744: 0xdca30038  ld          $v1, 0x38($a1)
    ctx->pc = 0x101744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x101748: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x101748u;
    {
        const bool branch_taken_0x101748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101748u;
        // 0x10174c: 0xfc830038  sd          $v1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101748) {
            ctx->pc = 0x101808u;
            return;
        }
    }
    ctx->pc = 0x101750u;
}
