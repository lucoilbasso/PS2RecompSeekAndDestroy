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

// Function: entry_001a5554
// Address: 0x1a5554 - 0x1a557c
void entry_001a5554_0x1a5554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5554_0x1a5554");
#endif

    switch (ctx->pc) {
        case 0x1a556cu: goto label_1a556c;
        default: break;
    }

    ctx->pc = 0x1a5554u;

    // 0x1a5554: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1a5554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a5558: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a5558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a555c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a555cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a5560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a5564: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A5564u;
    SET_GPR_U32(ctx, 31, 0x1A556Cu);
    ctx->pc = 0x1A5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5564u;
    // 0x1a5568: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A5564u, 0x1A556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A556Cu;
label_1a556c:
    // 0x1a556c: 0x8f839070  lw          $v1, -0x6F90($gp)
    ctx->pc = 0x1a556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a5570: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5570u;
    {
        const bool branch_taken_0x1a5570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5570u;
        // 0x1a5574: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5570) {
            ctx->pc = 0x1A557Cu;
            return;
        }
    }
    ctx->pc = 0x1A5578u;
    // 0x1a5578: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1a5578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    ctx->pc = 0x1a557cu;
}
