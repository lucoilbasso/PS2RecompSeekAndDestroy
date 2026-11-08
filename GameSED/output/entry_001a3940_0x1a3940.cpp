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

// Function: entry_001a3940
// Address: 0x1a3940 - 0x1a39a8
void entry_001a3940_0x1a3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3940_0x1a3940");
#endif

    ctx->pc = 0x1a3940u;

    // 0x1a3940: 0x1682009d  bne         $s4, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1A3940u;
    {
        const bool branch_taken_0x1a3940 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3940u;
        // 0x1a3944: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3940) {
            ctx->pc = 0x1A3BB8u;
            return;
        }
    }
    ctx->pc = 0x1A3948u;
    // 0x1a3948: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1a3948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a394c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3950: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x1a3950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3954: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a3954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3958: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1a3958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a395c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1a395cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3960: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1a3960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3964: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x1a3964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a3968: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x1a3968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x1a396c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A396Cu;
    {
        const bool branch_taken_0x1a396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A396Cu;
        // 0x1a3970: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a396c) {
            ctx->pc = 0x1A39C0u;
            return;
        }
    }
    ctx->pc = 0x1A3974u;
    // 0x1a3974: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x1a3974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a3978: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3978u;
    {
        const bool branch_taken_0x1a3978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3978) {
            ctx->pc = 0x1A397Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3978u;
            // 0x1a397c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A39A8u;
            return;
        }
    }
    ctx->pc = 0x1A3980u;
    // 0x1a3980: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3988: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a398c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a398cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3990: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a3990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3994: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a3994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a3998: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1a3998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a399c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1a399cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a39a0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A39A0u;
    {
        const bool branch_taken_0x1a39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39A0u;
        // 0x1a39a4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39a0) {
            ctx->pc = 0x1A3A34u;
            return;
        }
    }
    ctx->pc = 0x1A39A8u;
}
