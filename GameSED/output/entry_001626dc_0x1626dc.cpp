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

// Function: entry_001626dc
// Address: 0x1626dc - 0x162794
void entry_001626dc_0x1626dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001626dc_0x1626dc");
#endif

    switch (ctx->pc) {
        case 0x162744u: goto label_162744;
        case 0x162754u: goto label_162754;
        case 0x162764u: goto label_162764;
        case 0x162774u: goto label_162774;
        case 0x16277cu: goto label_16277c;
        case 0x162784u: goto label_162784;
        case 0x16278cu: goto label_16278c;
        default: break;
    }

    ctx->pc = 0x1626dcu;

    // 0x1626dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1626dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1626e0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1626e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1626e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1626e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1626e8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1626e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1626ec: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1626ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1626f0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1626f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1626f4: 0xf9240000  sqc2        $vf4, 0x0($t1)
    ctx->pc = 0x1626f4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1626f8: 0xf9250010  sqc2        $vf5, 0x10($t1)
    ctx->pc = 0x1626f8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1626fc: 0xf9260020  sqc2        $vf6, 0x20($t1)
    ctx->pc = 0x1626fcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162700: 0xf9270030  sqc2        $vf7, 0x30($t1)
    ctx->pc = 0x162700u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x162704: 0x25240040  addiu       $a0, $t1, 0x40
    ctx->pc = 0x162704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x162708: 0x25031a30  addiu       $v1, $t0, 0x1A30
    ctx->pc = 0x162708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6704));
    // 0x16270c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16270cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162710: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x162710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x162714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162718: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x162718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16271c: 0x26451a40  addiu       $a1, $s2, 0x1A40
    ctx->pc = 0x16271cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6720));
    // 0x162720: 0x8d0719cc  lw          $a3, 0x19CC($t0)
    ctx->pc = 0x162720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6604)));
    // 0x162724: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162728: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x162728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16272c: 0x269000a0  addiu       $s0, $s4, 0xA0
    ctx->pc = 0x16272cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x162730: 0x8d0219c4  lw          $v0, 0x19C4($t0)
    ctx->pc = 0x162730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6596)));
    // 0x162734: 0xad230090  sw          $v1, 0x90($t1)
    ctx->pc = 0x162734u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 3));
    // 0x162738: 0xad220080  sw          $v0, 0x80($t1)
    ctx->pc = 0x162738u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 2));
    // 0x16273c: 0xc05888a  jal         func_162228
    ctx->pc = 0x16273Cu;
    SET_GPR_U32(ctx, 31, 0x162744u);
    ctx->pc = 0x162740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16273Cu;
    // 0x162740: 0xad270084  sw          $a3, 0x84($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162228u, 0x16273Cu, 0x162744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162744u;
label_162744:
    // 0x162744: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x162744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x162748: 0x8e4419d4  lw          $a0, 0x19D4($s2)
    ctx->pc = 0x162748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6612)));
    // 0x16274c: 0xc05fe70  jal         func_17F9C0
    ctx->pc = 0x16274Cu;
    SET_GPR_U32(ctx, 31, 0x162754u);
    ctx->pc = 0x162750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16274Cu;
    // 0x162750: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9C0u, 0x16274Cu, 0x162754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162754u;
label_162754:
    // 0x162754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162758: 0x26451a50  addiu       $a1, $s2, 0x1A50
    ctx->pc = 0x162758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6736));
    // 0x16275c: 0xc05888a  jal         func_162228
    ctx->pc = 0x16275Cu;
    SET_GPR_U32(ctx, 31, 0x162764u);
    ctx->pc = 0x162760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16275Cu;
    // 0x162760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162228u, 0x16275Cu, 0x162764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162764u;
label_162764:
    // 0x162764: 0x8e4419d8  lw          $a0, 0x19D8($s2)
    ctx->pc = 0x162764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6616)));
    // 0x162768: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x162768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16276c: 0xc05fe70  jal         func_17F9C0
    ctx->pc = 0x16276Cu;
    SET_GPR_U32(ctx, 31, 0x162774u);
    ctx->pc = 0x162770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16276Cu;
    // 0x162770: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9C0u, 0x16276Cu, 0x162774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162774u;
label_162774:
    // 0x162774: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x162774u;
    SET_GPR_U32(ctx, 31, 0x16277Cu);
    ctx->pc = 0x162778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162774u;
    // 0x162778: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x162774u, 0x16277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16277Cu;
label_16277c:
    // 0x16277c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16277Cu;
    SET_GPR_U32(ctx, 31, 0x162784u);
    ctx->pc = 0x162780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16277Cu;
    // 0x162780: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16277Cu, 0x162784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162784u;
label_162784:
    // 0x162784: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x162784u;
    SET_GPR_U32(ctx, 31, 0x16278Cu);
    ctx->pc = 0x162788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162784u;
    // 0x162788: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x162784u, 0x16278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16278Cu;
label_16278c:
    // 0x16278c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16278Cu;
    SET_GPR_U32(ctx, 31, 0x162794u);
    ctx->pc = 0x162790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16278Cu;
    // 0x162790: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16278Cu, 0x162794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162794u;
}
