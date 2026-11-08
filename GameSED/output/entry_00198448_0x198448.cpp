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

// Function: entry_00198448
// Address: 0x198448 - 0x198474
void entry_00198448_0x198448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198448_0x198448");
#endif

    ctx->pc = 0x198448u;

    // 0x198448: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x198448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19844c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x19844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x198450: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198450u;
    {
        const bool branch_taken_0x198450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198450u;
        // 0x198454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198450) {
            ctx->pc = 0x198478u;
            return;
        }
    }
    ctx->pc = 0x198458u;
    // 0x198458: 0x90620007  lbu         $v0, 0x7($v1)
    ctx->pc = 0x198458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x19845c: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x198460: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x198468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19846c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19846cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x198470: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x198470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    ctx->pc = 0x198474u;
}
