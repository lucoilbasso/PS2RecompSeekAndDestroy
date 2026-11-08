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

// Function: entry_00131960
// Address: 0x131960 - 0x1319a0
void entry_00131960_0x131960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131960_0x131960");
#endif

    switch (ctx->pc) {
        case 0x13197cu: goto label_13197c;
        default: break;
    }

    ctx->pc = 0x131960u;

    // 0x131960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131964: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x131964u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x131968: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x131968u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x13196c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x13196cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x131970: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x131970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x131974: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x131974u;
    SET_GPR_U32(ctx, 31, 0x13197Cu);
    ctx->pc = 0x131978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131974u;
    // 0x131978: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x131974u, 0x13197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13197Cu;
label_13197c:
    // 0x13197c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13197Cu;
    {
        const bool branch_taken_0x13197c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13197Cu;
        // 0x131980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13197c) {
            ctx->pc = 0x1319A0u;
            return;
        }
    }
    ctx->pc = 0x131984u;
    // 0x131984: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x131984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131988: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x131988u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x13198c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x13198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x131990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131990u;
    {
        const bool branch_taken_0x131990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131990) {
            ctx->pc = 0x1319A0u;
            return;
        }
    }
    ctx->pc = 0x131998u;
    // 0x131998: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x131998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13199c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13199cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1319a0u;
}
