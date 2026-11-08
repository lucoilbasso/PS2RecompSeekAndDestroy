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

// Function: entry_001a4b80
// Address: 0x1a4b80 - 0x1a4bb0
void entry_001a4b80_0x1a4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4b80_0x1a4b80");
#endif

    switch (ctx->pc) {
        case 0x1a4b94u: goto label_1a4b94;
        default: break;
    }

    ctx->pc = 0x1a4b80u;

    // 0x1a4b80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4b84: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a4b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4b8c: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B94u);
    ctx->pc = 0x1A4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B8Cu;
    // 0x1a4b90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4B8Cu, 0x1A4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B94u;
label_1a4b94:
    // 0x1a4b94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b98: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a4b9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4B9Cu;
    {
        const bool branch_taken_0x1a4b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b9c) {
            ctx->pc = 0x1A4BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4B9Cu;
            // 0x1a4ba0: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4BB0u;
            return;
        }
    }
    ctx->pc = 0x1A4BA4u;
    // 0x1a4ba4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1a4ba8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1a4bac: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a4bacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x1a4bb0u;
}
