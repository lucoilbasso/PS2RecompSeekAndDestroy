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

// Function: entry_001a3494
// Address: 0x1a3494 - 0x1a34c8
void entry_001a3494_0x1a3494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3494_0x1a3494");
#endif

    switch (ctx->pc) {
        case 0x1a34c0u: goto label_1a34c0;
        default: break;
    }

    ctx->pc = 0x1a3494u;

label_1a3494:
    // 0x1a3494: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x1a3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1a3498:
    // 0x1a3498: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a3498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a349c:
    // 0x1a349c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a349cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a34a0:
    // 0x1a34a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1a34a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1a34a4:
    // 0x1a34a4: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1a34a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a34a8:
    // 0x1a34a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a34ac:
    // 0x1a34ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1a34b0:
    if (ctx->pc == 0x1A34B0u) {
        ctx->pc = 0x1A34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34ACu;
        // 0x1a34b0: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34B4u;
        goto label_1a34b4;
    }
    ctx->pc = 0x1A34ACu;
    {
        const bool branch_taken_0x1a34ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34ac) {
            ctx->pc = 0x1A34B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A34ACu;
            // 0x1a34b0: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A34C8u;
            return;
        }
    }
    ctx->pc = 0x1A34B4u;
label_1a34b4:
    // 0x1a34b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a34b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a34b8:
    // 0x1a34b8: 0x40f809  jalr        $v0
label_1a34bc:
    if (ctx->pc == 0x1A34BCu) {
        ctx->pc = 0x1A34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34B8u;
        // 0x1a34bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34C0u;
        goto label_1a34c0;
    }
    ctx->pc = 0x1A34B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A34C0u);
        ctx->pc = 0x1A34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34B8u;
        // 0x1a34bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A34B8u, 0x1A34C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A34C0u;
label_1a34c0:
    // 0x1a34c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a34c4:
    if (ctx->pc == 0x1A34C4u) {
        ctx->pc = 0x1A34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C0u;
        // 0x1a34c4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34C8u;
        goto label_fallthrough_0x1a34c0;
    }
    ctx->pc = 0x1A34C0u;
    {
        const bool branch_taken_0x1a34c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C0u;
        // 0x1a34c4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34c0) {
            ctx->pc = 0x1A34F4u;
            return;
        }
    }
label_fallthrough_0x1a34c0:
    ctx->pc = 0x1A34C8u;
}
