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

// Function: entry_00129218
// Address: 0x129218 - 0x1292a4
void entry_00129218_0x129218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129218_0x129218");
#endif

    ctx->pc = 0x129218u;

    // 0x129218: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12921c: 0x3c03503a  lui         $v1, 0x503A
    ctx->pc = 0x12921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20538 << 16));
    // 0x129220: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x129220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x129224: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x129224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x129228: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x129228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x12922c: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x129230: 0x34842c2e  ori         $a0, $a0, 0x2C2E
    ctx->pc = 0x129230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11310);
    // 0x129234: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x129234u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x129238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12923c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x12923cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x129240: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129244: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129248: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12924c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x12924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129254: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x129254u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x129258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12925c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12925cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x129260: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129264: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x129264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x129268: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x129268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12926c: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x12926cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x129270: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129274: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x129274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x129278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12927c: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x12927cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129280: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x129280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129284: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129288: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x129288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12928c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12928cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x129290: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x129290u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129294: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129298: 0xe4770004  swc1        $f23, 0x4($v1)
    ctx->pc = 0x129298u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12929c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12929cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1292a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1292a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1292a4u;
}
