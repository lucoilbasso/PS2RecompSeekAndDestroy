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

// Function: entry_001469c4
// Address: 0x1469c4 - 0x146a08
void entry_001469c4_0x1469c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001469c4_0x1469c4");
#endif

    ctx->pc = 0x1469c4u;

    // 0x1469c4: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x1469c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x1469c8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1469c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x1469cc: 0x24510070  addiu       $s1, $v0, 0x70
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1469d0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1469d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469d4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1469d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469d8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1469d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1469dc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1469dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469e0: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x1469e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x1469e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1469e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1469e8: 0x31a43  sra         $v1, $v1, 9
    ctx->pc = 0x1469e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 9));
    // 0x1469ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1469ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1469f0: 0x1460012f  bnez        $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x1469F0u;
    {
        const bool branch_taken_0x1469f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1469F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469F0u;
        // 0x1469f4: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469f0) {
            ctx->pc = 0x146EB0u;
            return;
        }
    }
    ctx->pc = 0x1469F8u;
    // 0x1469f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1469f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469fc: 0x264401b0  addiu       $a0, $s2, 0x1B0
    ctx->pc = 0x1469fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x146a00: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x146a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a04: 0x0  nop
    ctx->pc = 0x146a04u;
    // NOP
    ctx->pc = 0x146a08u;
}
