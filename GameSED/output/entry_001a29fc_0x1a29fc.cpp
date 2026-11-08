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

// Function: entry_001a29fc
// Address: 0x1a29fc - 0x1a2a40
void entry_001a29fc_0x1a29fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a29fc_0x1a29fc");
#endif

    ctx->pc = 0x1a29fcu;

    // 0x1a29fc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a2a00: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A2A00u;
    {
        const bool branch_taken_0x1a2a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a00) {
            ctx->pc = 0x1A2A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2A00u;
            // 0x1a2a04: 0x8602001a  lh          $v0, 0x1A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2A40u;
            return;
        }
    }
    ctx->pc = 0x1A2A08u;
    // 0x1a2a08: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1a2a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2a10: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2a14: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x1a2a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a2a18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2a1c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1a2a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a2a20: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1a2a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1a2a24: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a2a24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2a28: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a2a2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a2a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a2a30: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a2a30u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a2a34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A2A34u;
    {
        const bool branch_taken_0x1a2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a34) {
            ctx->pc = 0x1A2A6Cu;
            return;
        }
    }
    ctx->pc = 0x1A2A3Cu;
    // 0x1a2a3c: 0x0  nop
    ctx->pc = 0x1a2a3cu;
    // NOP
    ctx->pc = 0x1a2a40u;
}
