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

// Function: sceSifStopModule
// Address: 0x1b5f60 - 0x1b6168
void sceSifStopModule_0x1b5f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifStopModule_0x1b5f60");
#endif

    switch (ctx->pc) {
        case 0x1b5f98u: goto label_1b5f98;
        case 0x1b5fa8u: goto label_1b5fa8;
        case 0x1b5ff4u: goto label_1b5ff4;
        case 0x1b6058u: goto label_1b6058;
        case 0x1b60e8u: goto label_1b60e8;
        case 0x1b6124u: goto label_1b6124;
        default: break;
    }

    ctx->pc = 0x1b5f60u;

    // 0x1b5f60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b5f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b5f64: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b5f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b5f68: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b5f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b5f6c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b5f6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f70: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b5f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b5f74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b5f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b5f7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b5f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f80: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b5f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b5f84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b5f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f88: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b5f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b5f8c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b5f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b5f90: 0xc06d6e4  jal         func_1B5B90
    ctx->pc = 0x1B5F90u;
    SET_GPR_U32(ctx, 31, 0x1B5F98u);
    ctx->pc = 0x1B5F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F90u;
    // 0x1b5f94: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5B90u, 0x1B5F90u, 0x1B5F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F98u;
label_1b5f98:
    // 0x1b5f98: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1B5F98u;
    {
        const bool branch_taken_0x1b5f98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F98u;
        // 0x1b5f9c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f98) {
            ctx->pc = 0x1B6140u;
            goto label_1b6140;
        }
    }
    ctx->pc = 0x1B5FA0u;
    // 0x1b5fa0: 0xc06d724  jal         func_1B5C90
    ctx->pc = 0x1B5FA0u;
    SET_GPR_U32(ctx, 31, 0x1B5FA8u);
    ctx->pc = 0x1B5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5C90u, 0x1B5FA0u, 0x1B5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FA8u;
label_1b5fa8:
    // 0x1b5fa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5FA8u;
    {
        const bool branch_taken_0x1b5fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FA8u;
        // 0x1b5fac: 0x3c140041  lui         $s4, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fa8) {
            ctx->pc = 0x1B5FBCu;
            goto label_1b5fbc;
        }
    }
    ctx->pc = 0x1B5FB0u;
    // 0x1b5fb0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b5fb4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1B5FB4u;
    {
        const bool branch_taken_0x1b5fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FB4u;
        // 0x1b5fb8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fb4) {
            ctx->pc = 0x1B6140u;
            goto label_1b6140;
        }
    }
    ctx->pc = 0x1B5FBCu;
label_1b5fbc:
    // 0x1b5fbc: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1b5fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fc0: 0x2692b400  addiu       $s2, $s4, -0x4C00
    ctx->pc = 0x1b5fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947840));
    // 0x1b5fc4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1B5FC4u;
    {
        const bool branch_taken_0x1b5fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC4u;
        // 0x1b5fc8: 0xae93b400  sw          $s3, -0x4C00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947840), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fc4) {
            ctx->pc = 0x1B60F0u;
            goto label_1b60f0;
        }
    }
    ctx->pc = 0x1B5FCCu;
    // 0x1b5fcc: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1b5fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1b5fd0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B5FD0u;
    {
        const bool branch_taken_0x1b5fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FD0u;
        // 0x1b5fd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fd0) {
            ctx->pc = 0x1B60DCu;
            goto label_1b60dc;
        }
    }
    ctx->pc = 0x1B5FD8u;
    // 0x1b5fd8: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1b5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1b5fdc: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1b5fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1b5fe0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b5fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b5fe4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5FE4u;
    {
        const bool branch_taken_0x1b5fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FE4u;
        // 0x1b5fe8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fe4) {
            ctx->pc = 0x1B6050u;
            goto label_1b6050;
        }
    }
    ctx->pc = 0x1B5FECu;
    // 0x1b5fec: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1b5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b5ff0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_1b5ff4:
    // 0x1b5ff4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1b5ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b5ff8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1b5ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b5ffc: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1b5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b6000: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1b6000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b6004: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1b6004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b6008: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1b6008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b600c: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1b600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b6010: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1b6010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b6014: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1b6014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b6018: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1b6018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b601c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1b601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b6020: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1b6020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b6024: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1b6024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b6028: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1b6028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b602c: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1b602cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b6030: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1b6030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b6034: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1b6034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1b6038: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b6038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b603c: 0x0  nop
    ctx->pc = 0x1b603cu;
    // NOP
    // 0x1b6040: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B6040u;
    {
        const bool branch_taken_0x1b6040 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6040) {
            ctx->pc = 0x1B5FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5ff4;
        }
    }
    ctx->pc = 0x1B6048u;
    // 0x1b6048: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B6048u;
    {
        const bool branch_taken_0x1b6048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6048) {
            ctx->pc = 0x1B608Cu;
            goto label_1b608c;
        }
    }
    ctx->pc = 0x1B6050u;
label_1b6050:
    // 0x1b6050: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1b6050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b6054: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b6054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_1b6058:
    // 0x1b6058: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1b6058u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b605c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1b605cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b6060: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1b6060u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1b6064: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1b6064u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1b6068: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1b6068u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1b606c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1b606cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1b6070: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1b6070u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1b6074: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1b6074u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1b6078: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1b6078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1b607c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b6080: 0x0  nop
    ctx->pc = 0x1b6080u;
    // NOP
    // 0x1b6084: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B6084u;
    {
        const bool branch_taken_0x1b6084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6084) {
            ctx->pc = 0x1B6058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6058;
        }
    }
    ctx->pc = 0x1B608Cu;
label_1b608c:
    // 0x1b608c: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1b608cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b6090: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1b6090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b6094: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1b6094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1b6098: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1b6098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1b609c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1b609cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b60a0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1b60a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b60a4: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1b60a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1b60a8: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1b60a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1b60ac: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1b60acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b60b0: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x1b60b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b60b4: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x1b60b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b60b8: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x1b60b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b60bc: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1b60bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b60c0: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1b60c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b60c4: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x1b60c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b60c8: 0x26a3b400  addiu       $v1, $s5, -0x4C00
    ctx->pc = 0x1b60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947840));
    // 0x1b60cc: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1b60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1b60d0: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x1b60d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b60d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B60D4u;
    {
        const bool branch_taken_0x1b60d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60D4u;
        // 0x1b60d8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60d4) {
            ctx->pc = 0x1B60F8u;
            goto label_1b60f8;
        }
    }
    ctx->pc = 0x1B60DCu;
label_1b60dc:
    // 0x1b60dc: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1b60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1b60e0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B60E0u;
    SET_GPR_U32(ctx, 31, 0x1B60E8u);
    ctx->pc = 0x1B60E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60E0u;
    // 0x1b60e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B60E0u, 0x1B60E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60E8u;
label_1b60e8:
    // 0x1b60e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B60E8u;
    {
        const bool branch_taken_0x1b60e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60E8u;
        // 0x1b60ec: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60e8) {
            ctx->pc = 0x1B60F4u;
            goto label_1b60f4;
        }
    }
    ctx->pc = 0x1B60F0u;
label_1b60f0:
    // 0x1b60f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1b60f4:
    // 0x1b60f4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b60f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_1b60f8:
    // 0x1b60f8: 0x26b0b400  addiu       $s0, $s5, -0x4C00
    ctx->pc = 0x1b60f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947840));
    // 0x1b60fc: 0x24a4b600  addiu       $a0, $a1, -0x4A00
    ctx->pc = 0x1b60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
    // 0x1b6100: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6104: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b610c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b610cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6110: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b6110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b6114: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6118: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b611c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B611Cu;
    SET_GPR_U32(ctx, 31, 0x1B6124u);
    ctx->pc = 0x1B6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B611Cu;
    // 0x1b6120: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B611Cu, 0x1B6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6124u;
label_1b6124:
    // 0x1b6124: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6124u;
    {
        const bool branch_taken_0x1b6124 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6124) {
            ctx->pc = 0x1B6128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6124u;
            // 0x1b6128: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6138u;
            goto label_1b6138;
        }
    }
    ctx->pc = 0x1B612Cu;
    // 0x1b612c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6130u;
    {
        const bool branch_taken_0x1b6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6130u;
        // 0x1b6134: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6130) {
            ctx->pc = 0x1B6140u;
            goto label_1b6140;
        }
    }
    ctx->pc = 0x1B6138u;
label_1b6138:
    // 0x1b6138: 0x8e82b400  lw          $v0, -0x4C00($s4)
    ctx->pc = 0x1b6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947840)));
    // 0x1b613c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1b613cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1b6140:
    // 0x1b6140: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b6140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b6144: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b6144u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b6148: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b6148u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b614c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b614cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6150: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b6150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6154: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b6154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6158: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b6158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b615c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b615cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6160: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6160u;
        // 0x1b6164: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6168u;
}
