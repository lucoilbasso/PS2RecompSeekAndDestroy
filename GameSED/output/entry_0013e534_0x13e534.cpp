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

// Function: entry_0013e534
// Address: 0x13e534 - 0x13e5b8
void entry_0013e534_0x13e534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e534_0x13e534");
#endif

    ctx->pc = 0x13e534u;

    // 0x13e534: 0x3c025022  lui         $v0, 0x5022
    ctx->pc = 0x13e534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20514 << 16));
    // 0x13e538: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13e538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13e53c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13e540: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x13e540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x13e544: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x13e544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x13e548: 0x34a5444e  ori         $a1, $a1, 0x444E
    ctx->pc = 0x13e548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17486);
    // 0x13e54c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x13e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x13e550: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13e554: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x13e554u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x13e558: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x13e558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e55c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e560: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e564: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13e568: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x13e568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e56c: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x13e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x13e570: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e574: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13e574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13e578: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x13e578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e57c: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x13e57cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13e580: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e584: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x13e584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e588: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e58c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x13e58cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e590: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x13e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e594: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e598: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x13e598u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x13e59c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13e59cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e5a0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x13e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x13e5a4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x13e5a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e5a8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13e5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x13e5ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13e5acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e5b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13e5b4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x13e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    ctx->pc = 0x13e5b8u;
}
