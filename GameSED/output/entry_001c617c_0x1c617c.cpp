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

// Function: entry_001c617c
// Address: 0x1c617c - 0x1c6280
void entry_001c617c_0x1c617c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c617c_0x1c617c");
#endif

    switch (ctx->pc) {
        case 0x1c6230u: goto label_1c6230;
        case 0x1c623cu: goto label_1c623c;
        case 0x1c6268u: goto label_1c6268;
        default: break;
    }

    ctx->pc = 0x1c617cu;

    // 0x1c617c: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x1c617cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1c6180: 0x2450eef0  addiu       $s0, $v0, -0x1110
    ctx->pc = 0x1c6180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962928));
    // 0x1c6184: 0xac54eef0  sw          $s4, -0x1110($v0)
    ctx->pc = 0x1c6184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962928), GPR_U32(ctx, 20));
    // 0x1c6188: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1c6188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1c618c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c6190: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1c6190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1c6194: 0x2443ee80  addiu       $v1, $v0, -0x1180
    ctx->pc = 0x1c6194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962816));
    // 0x1c6198: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1c6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c619c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c619cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61a0: 0x2449ee80  addiu       $t1, $v0, -0x1180
    ctx->pc = 0x1c61a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962816));
    // 0x1c61a4: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x1c61a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c61a8: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x1c61a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c61ac: 0x6ac7000f  ldl         $a3, 0xF($s6)
    ctx->pc = 0x1c61acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c61b0: 0x6ec70008  ldr         $a3, 0x8($s6)
    ctx->pc = 0x1c61b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c61b4: 0x6ac80017  ldl         $t0, 0x17($s6)
    ctx->pc = 0x1c61b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1c61b8: 0x6ec80010  ldr         $t0, 0x10($s6)
    ctx->pc = 0x1c61b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1c61bc: 0xb1260007  sdl         $a2, 0x7($t1)
    ctx->pc = 0x1c61bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61c0: 0xb5260000  sdr         $a2, 0x0($t1)
    ctx->pc = 0x1c61c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61c4: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x1c61c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61c8: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x1c61c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61cc: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x1c61ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61d0: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x1c61d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61d4: 0x6ac6001f  ldl         $a2, 0x1F($s6)
    ctx->pc = 0x1c61d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c61d8: 0x6ec60018  ldr         $a2, 0x18($s6)
    ctx->pc = 0x1c61d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c61dc: 0x6ac70027  ldl         $a3, 0x27($s6)
    ctx->pc = 0x1c61dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c61e0: 0x6ec70020  ldr         $a3, 0x20($s6)
    ctx->pc = 0x1c61e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c61e4: 0x6ac8002f  ldl         $t0, 0x2F($s6)
    ctx->pc = 0x1c61e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1c61e8: 0x6ec80028  ldr         $t0, 0x28($s6)
    ctx->pc = 0x1c61e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1c61ec: 0xb126001f  sdl         $a2, 0x1F($t1)
    ctx->pc = 0x1c61ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61f0: 0xb5260018  sdr         $a2, 0x18($t1)
    ctx->pc = 0x1c61f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61f4: 0xb1270027  sdl         $a3, 0x27($t1)
    ctx->pc = 0x1c61f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61f8: 0xb5270020  sdr         $a3, 0x20($t1)
    ctx->pc = 0x1c61f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c61fc: 0xb128002f  sdl         $t0, 0x2F($t1)
    ctx->pc = 0x1c61fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6200: 0xb5280028  sdr         $t0, 0x28($t1)
    ctx->pc = 0x1c6200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6204: 0x6ac60037  ldl         $a2, 0x37($s6)
    ctx->pc = 0x1c6204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c6208: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x1c6208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c620c: 0x6ac7003f  ldl         $a3, 0x3F($s6)
    ctx->pc = 0x1c620cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c6210: 0x6ec70038  ldr         $a3, 0x38($s6)
    ctx->pc = 0x1c6210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c6214: 0xb1260037  sdl         $a2, 0x37($t1)
    ctx->pc = 0x1c6214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6218: 0xb5260030  sdr         $a2, 0x30($t1)
    ctx->pc = 0x1c6218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c621c: 0xb127003f  sdl         $a3, 0x3F($t1)
    ctx->pc = 0x1c621cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6220: 0xb5270038  sdr         $a3, 0x38($t1)
    ctx->pc = 0x1c6220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6224: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c6224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1c6228: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C6228u;
    SET_GPR_U32(ctx, 31, 0x1C6230u);
    ctx->pc = 0x1C622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6228u;
    // 0x1c622c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C6228u, 0x1C6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6230u;
label_1c6230:
    // 0x1c6230: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1c6230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6234: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1C6234u;
    SET_GPR_U32(ctx, 31, 0x1C623Cu);
    ctx->pc = 0x1C6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6234u;
    // 0x1c6238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1C6234u, 0x1C623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C623Cu;
label_1c623c:
    // 0x1c623c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c623cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c6240: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c6240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6244: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c6244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6248: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c6248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c624c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c624cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c6250: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c6250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6254: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c6254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6258: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1c6258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1c625c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c625cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6260: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C6260u;
    SET_GPR_U32(ctx, 31, 0x1C6268u);
    ctx->pc = 0x1C6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6260u;
    // 0x1c6264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C6260u, 0x1C6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6268u;
label_1c6268:
    // 0x1c6268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c626c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C626Cu;
    {
        const bool branch_taken_0x1c626c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C626Cu;
        // 0x1c6270: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c626c) {
            ctx->pc = 0x1C6280u;
            return;
        }
    }
    ctx->pc = 0x1C6274u;
    // 0x1c6274: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c6274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6278u;
    {
        const bool branch_taken_0x1c6278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6278u;
        // 0x1c627c: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6278) {
            ctx->pc = 0x1C6288u;
            return;
        }
    }
    ctx->pc = 0x1C6280u;
}
