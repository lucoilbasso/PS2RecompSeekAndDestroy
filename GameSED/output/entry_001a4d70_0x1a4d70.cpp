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

// Function: entry_001a4d70
// Address: 0x1a4d70 - 0x1a4db0
void entry_001a4d70_0x1a4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d70_0x1a4d70");
#endif

    switch (ctx->pc) {
        case 0x1a4d88u: goto label_1a4d88;
        default: break;
    }

    ctx->pc = 0x1a4d70u;

    // 0x1a4d70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4d74: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a4d78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a4d7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a4d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a4d80: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A4D80u;
    SET_GPR_U32(ctx, 31, 0x1A4D88u);
    ctx->pc = 0x1A4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D80u;
    // 0x1a4d84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4D80u, 0x1A4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D88u;
label_1a4d88:
    // 0x1a4d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d8c: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a4d90: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4D90u;
    {
        const bool branch_taken_0x1a4d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d90) {
            ctx->pc = 0x1A4D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D90u;
            // 0x1a4d94: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4DB0u;
            return;
        }
    }
    ctx->pc = 0x1A4D98u;
    // 0x1a4d98: 0xc780864c  lwc1        $f0, -0x79B4($gp)
    ctx->pc = 0x1a4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4d9c: 0xc7818650  lwc1        $f1, -0x79B0($gp)
    ctx->pc = 0x1a4d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4da0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1a4da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1a4da4: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1a4da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1a4da8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1a4dac: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a4dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x1a4db0u;
}
