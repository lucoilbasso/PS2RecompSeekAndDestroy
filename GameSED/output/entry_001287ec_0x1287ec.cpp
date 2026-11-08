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

// Function: entry_001287ec
// Address: 0x1287ec - 0x128874
void entry_001287ec_0x1287ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287ec_0x1287ec");
#endif

    ctx->pc = 0x1287ecu;

    // 0x1287ec: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1287ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1287f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1287F0u;
    {
        const bool branch_taken_0x1287f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287F0u;
        // 0x1287f4: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287f0) {
            ctx->pc = 0x1287A8u;
            return;
        }
    }
    ctx->pc = 0x1287F8u;
    // 0x1287f8: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x1287F8u;
    {
        const bool branch_taken_0x1287f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1287FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287F8u;
        // 0x1287fc: 0x93a300b3  lbu         $v1, 0xB3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287f8) {
            ctx->pc = 0x128874u;
            return;
        }
    }
    ctx->pc = 0x128800u;
    // 0x128800: 0xc6e00018  lwc1        $f0, 0x18($s7)
    ctx->pc = 0x128800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x128804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128808: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x128808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12880c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12880cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128810: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x128810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x128814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128818: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x128818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12881c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128820: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x128820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128824: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x128828: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x128828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12882c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12882cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128830: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x128830u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x128834: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x128834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128838: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x128838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12883c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12883cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128840: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x128840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x128844: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x128844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12884c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12884cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128850: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x128850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128854: 0xc6e0001c  lwc1        $f0, 0x1C($s7)
    ctx->pc = 0x128854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128858: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x128858u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12885c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12885cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x128860: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x128860u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x128864: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x128864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x128868: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x128868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12886c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12886cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x128870: 0x93a300b3  lbu         $v1, 0xB3($sp)
    ctx->pc = 0x128870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
    ctx->pc = 0x128874u;
}
