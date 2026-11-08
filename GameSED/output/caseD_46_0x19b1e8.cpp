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

// Function: caseD_46
// Address: 0x19b1e8 - 0x19b208
void caseD_46_0x19b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_46_0x19b1e8");
#endif

    ctx->pc = 0x19b1e8u;

    // 0x19b1e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b1ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x19b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b1f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19b1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19b1f8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19B1F8u;
    {
        const bool branch_taken_0x19b1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1F8u;
        // 0x19b1fc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1f8) {
            ctx->pc = 0x19B24Cu;
            return;
        }
    }
    ctx->pc = 0x19B200u;
    // 0x19b200: 0xc78085d0  lwc1        $f0, -0x7A30($gp)
    ctx->pc = 0x19b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b204: 0x0  nop
    ctx->pc = 0x19b204u;
    // NOP
    ctx->pc = 0x19b208u;
}
