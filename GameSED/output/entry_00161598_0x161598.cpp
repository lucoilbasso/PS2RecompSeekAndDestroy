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

// Function: entry_00161598
// Address: 0x161598 - 0x161638
void entry_00161598_0x161598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161598_0x161598");
#endif

    switch (ctx->pc) {
        case 0x1615b0u: goto label_1615b0;
        case 0x1615f4u: goto label_1615f4;
        case 0x16162cu: goto label_16162c;
        default: break;
    }

    ctx->pc = 0x161598u;

    // 0x161598: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x161598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16159c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1615a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1615a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1615a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1615a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1615a8: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x1615A8u;
    SET_GPR_U32(ctx, 31, 0x1615B0u);
    ctx->pc = 0x1615ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615A8u;
    // 0x1615ac: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x1615A8u, 0x1615B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615B0u;
label_1615b0:
    // 0x1615b0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1615b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1615b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1615b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615b8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1615bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1615bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1615c0: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1615C0u;
    {
        const bool branch_taken_0x1615c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615c0) {
            ctx->pc = 0x1615C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1615C0u;
            // 0x1615c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161678u;
            return;
        }
    }
    ctx->pc = 0x1615C8u;
    // 0x1615c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1615c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1615cc: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1615CCu;
    {
        const bool branch_taken_0x1615cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615cc) {
            ctx->pc = 0x1615D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1615CCu;
            // 0x1615d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161678u;
            return;
        }
    }
    ctx->pc = 0x1615D4u;
    // 0x1615d4: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x1615d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x1615d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1615d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1615dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1615dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1615e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1615e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615e4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1615e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1615e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1615e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615ec: 0xc0618da  jal         func_186368
    ctx->pc = 0x1615ECu;
    SET_GPR_U32(ctx, 31, 0x1615F4u);
    ctx->pc = 0x1615F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615ECu;
    // 0x1615f0: 0x8c510034  lw          $s1, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1615ECu, 0x1615F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615F4u;
label_1615f4:
    // 0x1615f4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1615f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1615F8u;
    {
        const bool branch_taken_0x1615f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1615FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615F8u;
        // 0x1615fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615f8) {
            ctx->pc = 0x161658u;
            return;
        }
    }
    ctx->pc = 0x161600u;
    // 0x161600: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x161600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x161604: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x161608: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x161608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x16160c: 0x102282a  slt         $a1, $t0, $v0
    ctx->pc = 0x16160cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161610: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x161610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x161614: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161614u;
    {
        const bool branch_taken_0x161614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161614u;
        // 0x161618: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161614) {
            ctx->pc = 0x161638u;
            return;
        }
    }
    ctx->pc = 0x16161Cu;
    // 0x16161c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161624: 0xc0618da  jal         func_186368
    ctx->pc = 0x161624u;
    SET_GPR_U32(ctx, 31, 0x16162Cu);
    ctx->pc = 0x161628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161624u;
    // 0x161628: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x161624u, 0x16162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16162Cu;
label_16162c:
    // 0x16162c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16162Cu;
    {
        const bool branch_taken_0x16162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16162Cu;
        // 0x161630: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16162c) {
            ctx->pc = 0x161658u;
            return;
        }
    }
    ctx->pc = 0x161634u;
    // 0x161634: 0x0  nop
    ctx->pc = 0x161634u;
    // NOP
    ctx->pc = 0x161638u;
}
