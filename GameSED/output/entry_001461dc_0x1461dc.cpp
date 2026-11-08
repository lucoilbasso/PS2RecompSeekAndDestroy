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

// Function: entry_001461dc
// Address: 0x1461dc - 0x146218
void entry_001461dc_0x1461dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001461dc_0x1461dc");
#endif

    switch (ctx->pc) {
        case 0x1461f4u: goto label_1461f4;
        case 0x146214u: goto label_146214;
        default: break;
    }

    ctx->pc = 0x1461dcu;

    // 0x1461dc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1461dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1461e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1461e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1461e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1461e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1461e8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1461ec: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1461ECu;
    SET_GPR_U32(ctx, 31, 0x1461F4u);
    ctx->pc = 0x1461F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461ECu;
    // 0x1461f0: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1461ECu, 0x1461F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461F4u;
label_1461f4:
    // 0x1461f4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1461f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1461fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1461fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x146200: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146204: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146204u;
    {
        const bool branch_taken_0x146204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x146208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146204u;
        // 0x146208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146204) {
            ctx->pc = 0x146218u;
            return;
        }
    }
    ctx->pc = 0x14620Cu;
    // 0x14620c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14620Cu;
    SET_GPR_U32(ctx, 31, 0x146214u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14620Cu, 0x146214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146214u;
label_146214:
    // 0x146214: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x146214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x146218u;
}
