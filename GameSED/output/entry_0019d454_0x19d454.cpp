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

// Function: entry_0019d454
// Address: 0x19d454 - 0x19d4b0
void entry_0019d454_0x19d454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d454_0x19d454");
#endif

    ctx->pc = 0x19d454u;

    // 0x19d454: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d458: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x19d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d45c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19d45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19d460: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19d460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19d464: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19d464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19d468: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x19d468u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d46c: 0x45010067  bc1t        . + 4 + (0x67 << 2)
    ctx->pc = 0x19D46Cu;
    {
        const bool branch_taken_0x19d46c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D46Cu;
        // 0x19d470: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d46c) {
            ctx->pc = 0x19D60Cu;
            return;
        }
    }
    ctx->pc = 0x19D474u;
    // 0x19d474: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x19d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d478: 0x46050004  c1          0x50004
    ctx->pc = 0x19d478u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x19d47c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x19d47cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x19d480: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x19d480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d484: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x19D484u;
    {
        const bool branch_taken_0x19d484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d484) {
            ctx->pc = 0x19D4B0u;
            return;
        }
    }
    ctx->pc = 0x19D48Cu;
    // 0x19d48c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x19d48cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d490: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x19D490u;
    {
        const bool branch_taken_0x19d490 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D490u;
        // 0x19d494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d490) {
            ctx->pc = 0x19D5E0u;
            return;
        }
    }
    ctx->pc = 0x19D498u;
    // 0x19d498: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x19d498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d49c: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x19D49Cu;
    {
        const bool branch_taken_0x19d49c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D49Cu;
        // 0x19d4a0: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d49c) {
            ctx->pc = 0x19D5E0u;
            return;
        }
    }
    ctx->pc = 0x19D4A4u;
    // 0x19d4a4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x19D4A4u;
    {
        const bool branch_taken_0x19d4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4A4u;
        // 0x19d4a8: 0x2402e000  addiu       $v0, $zero, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4a4) {
            ctx->pc = 0x19D5E0u;
            return;
        }
    }
    ctx->pc = 0x19D4ACu;
    // 0x19d4ac: 0x0  nop
    ctx->pc = 0x19d4acu;
    // NOP
    ctx->pc = 0x19d4b0u;
}
