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

// Function: entry_00162248
// Address: 0x162248 - 0x1622b8
void entry_00162248_0x162248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162248_0x162248");
#endif

    ctx->pc = 0x162248u;

    // 0x162248: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x162248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x16224c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x16224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x162250: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x162250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x162254: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x162254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x162258: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x162258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x16225c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x16225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x162260: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x162260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x162264: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x162264u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x162268: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x162268u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x16226c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x16226cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x162270: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x162274: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x162274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x162278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16227c: 0x8e130090  lw          $s3, 0x90($s0)
    ctx->pc = 0x16227cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x162280: 0x184000d8  blez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x162280u;
    {
        const bool branch_taken_0x162280 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x162284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162280u;
        // 0x162284: 0x8e120084  lw          $s2, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162280) {
            ctx->pc = 0x1625E4u;
            return;
        }
    }
    ctx->pc = 0x162288u;
    // 0x162288: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16228c: 0x26170050  addiu       $s7, $s0, 0x50
    ctx->pc = 0x16228cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x162290: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x162290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x162294: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x162294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x162298: 0x26160060  addiu       $s6, $s0, 0x60
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x16229c: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x16229cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1622a0: 0xc7958344  lwc1        $f21, -0x7CBC($gp)
    ctx->pc = 0x1622a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1622a4: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x1622a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1622a8: 0x251e0020  addiu       $fp, $t0, 0x20
    ctx->pc = 0x1622a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1622ac: 0x24550028  addiu       $s5, $v0, 0x28
    ctx->pc = 0x1622acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1622b0: 0x26070070  addiu       $a3, $s0, 0x70
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1622b4: 0x26540008  addiu       $s4, $s2, 0x8
    ctx->pc = 0x1622b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->pc = 0x1622b8u;
}
