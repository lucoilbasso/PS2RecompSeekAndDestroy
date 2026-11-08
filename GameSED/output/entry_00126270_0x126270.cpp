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

// Function: entry_00126270
// Address: 0x126270 - 0x1262a8
void entry_00126270_0x126270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126270_0x126270");
#endif

    switch (ctx->pc) {
        case 0x12627cu: goto label_12627c;
        default: break;
    }

    ctx->pc = 0x126270u;

    // 0x126270: 0xfa600000  sqc2        $vf0, 0x0($s3)
    ctx->pc = 0x126270u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x126274: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x126274u;
    SET_GPR_U32(ctx, 31, 0x12627Cu);
    ctx->pc = 0x126278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126274u;
    // 0x126278: 0x24041770  addiu       $a0, $zero, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x126274u, 0x12627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12627Cu;
label_12627c:
    // 0x12627c: 0x24041770  addiu       $a0, $zero, 0x1770
    ctx->pc = 0x12627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x126280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126284: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x126284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x126288: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x126288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x12628c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x12628cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x126290: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126290u;
    {
        const bool branch_taken_0x126290 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x126294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126290u;
        // 0x126294: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126290) {
            ctx->pc = 0x1262A8u;
            return;
        }
    }
    ctx->pc = 0x126298u;
    // 0x126298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12629c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12629cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1262a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1262A0u;
    {
        const bool branch_taken_0x1262a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262A0u;
        // 0x1262a4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262a0) {
            ctx->pc = 0x1262B8u;
            return;
        }
    }
    ctx->pc = 0x1262A8u;
}
