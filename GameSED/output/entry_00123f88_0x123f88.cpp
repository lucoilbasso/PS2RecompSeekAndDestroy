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

// Function: entry_00123f88
// Address: 0x123f88 - 0x123ff8
void entry_00123f88_0x123f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123f88_0x123f88");
#endif

    ctx->pc = 0x123f88u;

    // 0x123f88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x123f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x123f8c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x123f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x123f90: 0x24425cc0  addiu       $v0, $v0, 0x5CC0
    ctx->pc = 0x123f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23744));
    // 0x123f94: 0xc78b80b4  lwc1        $f11, -0x7F4C($gp)
    ctx->pc = 0x123f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x123f98: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x123f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x123f9c: 0x4600a286  mov.s       $f10, $f20
    ctx->pc = 0x123f9cu;
    ctx->f[10] = FPU_MOV_S(ctx->f[20]);
    // 0x123fa0: 0xc78480b8  lwc1        $f4, -0x7F48($gp)
    ctx->pc = 0x123fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x123fa4: 0x46005246  mov.s       $f9, $f10
    ctx->pc = 0x123fa4u;
    ctx->f[9] = FPU_MOV_S(ctx->f[10]);
    // 0x123fa8: 0xae43015c  sw          $v1, 0x15C($s2)
    ctx->pc = 0x123fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 3));
    // 0x123fac: 0x46005206  mov.s       $f8, $f10
    ctx->pc = 0x123facu;
    ctx->f[8] = FPU_MOV_S(ctx->f[10]);
    // 0x123fb0: 0xc78c80bc  lwc1        $f12, -0x7F44($gp)
    ctx->pc = 0x123fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x123fb4: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x123fb4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
    // 0x123fb8: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x123fb8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x255CD8u));
    // 0x123fbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fc0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x123fc0u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x255CC0u));
    // 0x123fc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x123fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fc8: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x123fc8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x255CC8u));
    // 0x123fcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x123fccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fd0: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x123fd0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x255CD0u));
    // 0x123fd4: 0x46005986  mov.s       $f6, $f11
    ctx->pc = 0x123fd4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[11]);
    // 0x123fd8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x123fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x123fdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fe0: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x123fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x123fe4: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x123fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x123fe8: 0xc78580c0  lwc1        $f5, -0x7F40($gp)
    ctx->pc = 0x123fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x123fec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x123FECu;
    {
        const bool branch_taken_0x123fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FECu;
        // 0x123ff0: 0xffa60018  sd          $a2, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fec) {
            ctx->pc = 0x124038u;
            return;
        }
    }
    ctx->pc = 0x123FF4u;
    // 0x123ff4: 0x0  nop
    ctx->pc = 0x123ff4u;
    // NOP
    ctx->pc = 0x123ff8u;
}
