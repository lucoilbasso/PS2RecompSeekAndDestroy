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

// Function: entry_00145574
// Address: 0x145574 - 0x1455c0
void entry_00145574_0x145574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145574_0x145574");
#endif

    switch (ctx->pc) {
        case 0x145588u: goto label_145588;
        case 0x14559cu: goto label_14559c;
        case 0x1455bcu: goto label_1455bc;
        default: break;
    }

    ctx->pc = 0x145574u;

    // 0x145574: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x145574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x145578: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x145578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14557c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145580: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x145580u;
    SET_GPR_U32(ctx, 31, 0x145588u);
    ctx->pc = 0x145584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145580u;
    // 0x145584: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x145580u, 0x145588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145588u;
label_145588:
    // 0x145588: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14558c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x145590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145594: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x145594u;
    SET_GPR_U32(ctx, 31, 0x14559Cu);
    ctx->pc = 0x145598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145594u;
    // 0x145598: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x145594u, 0x14559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14559Cu;
label_14559c:
    // 0x14559c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1455a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1455a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1455a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1455a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1455ac: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1455ACu;
    {
        const bool branch_taken_0x1455ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1455B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455ACu;
        // 0x1455b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455ac) {
            ctx->pc = 0x1455C0u;
            return;
        }
    }
    ctx->pc = 0x1455B4u;
    // 0x1455b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1455B4u;
    SET_GPR_U32(ctx, 31, 0x1455BCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1455B4u, 0x1455BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455BCu;
label_1455bc:
    // 0x1455bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1455bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1455c0u;
}
