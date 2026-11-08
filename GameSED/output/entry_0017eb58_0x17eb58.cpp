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

// Function: entry_0017eb58
// Address: 0x17eb58 - 0x17eb90
void entry_0017eb58_0x17eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb58_0x17eb58");
#endif

    ctx->pc = 0x17eb58u;

    // 0x17eb58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17eb5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17eb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17eb60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17eb64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17eb68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17eb6c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17eb70: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17eb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17eb74: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17eb74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17eb78: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x17eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x17eb7c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EB7Cu;
    {
        const bool branch_taken_0x17eb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB7Cu;
        // 0x17eb80: 0x8ef50004  lw          $s5, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb7c) {
            ctx->pc = 0x17EB90u;
            return;
        }
    }
    ctx->pc = 0x17EB84u;
    // 0x17eb84: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x17eb88: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17EB88u;
    SET_GPR_U32(ctx, 31, 0x17EB90u);
    ctx->pc = 0x17EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB88u;
    // 0x17eb8c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17EB88u, 0x17EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB90u;
}
