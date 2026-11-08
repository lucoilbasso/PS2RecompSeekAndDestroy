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

// Function: init_reg_size_table
// Address: 0x1cd2c0 - 0x1cd4c8
void init_reg_size_table_0x1cd2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("init_reg_size_table_0x1cd2c0");
#endif

    ctx->pc = 0x1cd2c0u;

    // 0x1cd2c0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1cd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1cd2c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cd2c8: 0x24420568  addiu       $v0, $v0, 0x568
    ctx->pc = 0x1cd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1384));
    // 0x1cd2cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cd2d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cd2d4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1cd2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1cd2d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd2dc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1cd2dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410568u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410568u, _value); } while (0);
    // 0x1cd2e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1cd2e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410569u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410569u, _value); } while (0);
    // 0x1cd2e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1cd2e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41056Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41056Au, _value); } while (0);
    // 0x1cd2e8: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1cd2e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41056Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41056Bu, _value); } while (0);
    // 0x1cd2ec: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x1cd2ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41056Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41056Cu, _value); } while (0);
    // 0x1cd2f0: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x1cd2f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41056Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41056Du, _value); } while (0);
    // 0x1cd2f4: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x1cd2f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41056Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41056Eu, _value); } while (0);
    // 0x1cd2f8: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1cd2f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41056Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41056Fu, _value); } while (0);
    // 0x1cd2fc: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1cd2fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410570u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410570u, _value); } while (0);
    // 0x1cd300: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x1cd300u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410571u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410571u, _value); } while (0);
    // 0x1cd304: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x1cd304u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410572u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410572u, _value); } while (0);
    // 0x1cd308: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x1cd308u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410573u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410573u, _value); } while (0);
    // 0x1cd30c: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x1cd30cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410574u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410574u, _value); } while (0);
    // 0x1cd310: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x1cd310u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410575u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410575u, _value); } while (0);
    // 0x1cd314: 0xa043000e  sb          $v1, 0xE($v0)
    ctx->pc = 0x1cd314u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410576u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410576u, _value); } while (0);
    // 0x1cd318: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x1cd318u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410577u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410577u, _value); } while (0);
    // 0x1cd31c: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x1cd31cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410578u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410578u, _value); } while (0);
    // 0x1cd320: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x1cd320u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410579u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410579u, _value); } while (0);
    // 0x1cd324: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x1cd324u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41057Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41057Au, _value); } while (0);
    // 0x1cd328: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x1cd328u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41057Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41057Bu, _value); } while (0);
    // 0x1cd32c: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x1cd32cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41057Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41057Cu, _value); } while (0);
    // 0x1cd330: 0xa0430015  sb          $v1, 0x15($v0)
    ctx->pc = 0x1cd330u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41057Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41057Du, _value); } while (0);
    // 0x1cd334: 0xa0430016  sb          $v1, 0x16($v0)
    ctx->pc = 0x1cd334u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41057Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41057Eu, _value); } while (0);
    // 0x1cd338: 0xa0430017  sb          $v1, 0x17($v0)
    ctx->pc = 0x1cd338u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41057Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41057Fu, _value); } while (0);
    // 0x1cd33c: 0xa0430018  sb          $v1, 0x18($v0)
    ctx->pc = 0x1cd33cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410580u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410580u, _value); } while (0);
    // 0x1cd340: 0xa0430019  sb          $v1, 0x19($v0)
    ctx->pc = 0x1cd340u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410581u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410581u, _value); } while (0);
    // 0x1cd344: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x1cd344u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410582u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410582u, _value); } while (0);
    // 0x1cd348: 0xa043001b  sb          $v1, 0x1B($v0)
    ctx->pc = 0x1cd348u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410583u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410583u, _value); } while (0);
    // 0x1cd34c: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x1cd34cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410584u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410584u, _value); } while (0);
    // 0x1cd350: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x1cd350u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410585u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410585u, _value); } while (0);
    // 0x1cd354: 0xa043001e  sb          $v1, 0x1E($v0)
    ctx->pc = 0x1cd354u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x410586u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410586u, _value); } while (0);
    // 0x1cd358: 0xa0440020  sb          $a0, 0x20($v0)
    ctx->pc = 0x1cd358u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410588u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410588u, _value); } while (0);
    // 0x1cd35c: 0xa0440021  sb          $a0, 0x21($v0)
    ctx->pc = 0x1cd35cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410589u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410589u, _value); } while (0);
    // 0x1cd360: 0xa0440022  sb          $a0, 0x22($v0)
    ctx->pc = 0x1cd360u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41058Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41058Au, _value); } while (0);
    // 0x1cd364: 0xa0450042  sb          $a1, 0x42($v0)
    ctx->pc = 0x1cd364u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4105AAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105AAu, _value); } while (0);
    // 0x1cd368: 0xa0440023  sb          $a0, 0x23($v0)
    ctx->pc = 0x1cd368u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41058Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41058Bu, _value); } while (0);
    // 0x1cd36c: 0xa0440024  sb          $a0, 0x24($v0)
    ctx->pc = 0x1cd36cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41058Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41058Cu, _value); } while (0);
    // 0x1cd370: 0xa0440025  sb          $a0, 0x25($v0)
    ctx->pc = 0x1cd370u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41058Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41058Du, _value); } while (0);
    // 0x1cd374: 0xa0440026  sb          $a0, 0x26($v0)
    ctx->pc = 0x1cd374u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41058Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41058Eu, _value); } while (0);
    // 0x1cd378: 0xa0440027  sb          $a0, 0x27($v0)
    ctx->pc = 0x1cd378u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41058Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41058Fu, _value); } while (0);
    // 0x1cd37c: 0xa0440028  sb          $a0, 0x28($v0)
    ctx->pc = 0x1cd37cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410590u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410590u, _value); } while (0);
    // 0x1cd380: 0xa0440029  sb          $a0, 0x29($v0)
    ctx->pc = 0x1cd380u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410591u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410591u, _value); } while (0);
    // 0x1cd384: 0xa044002a  sb          $a0, 0x2A($v0)
    ctx->pc = 0x1cd384u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410592u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410592u, _value); } while (0);
    // 0x1cd388: 0xa044002b  sb          $a0, 0x2B($v0)
    ctx->pc = 0x1cd388u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410593u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410593u, _value); } while (0);
    // 0x1cd38c: 0xa044002c  sb          $a0, 0x2C($v0)
    ctx->pc = 0x1cd38cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410594u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410594u, _value); } while (0);
    // 0x1cd390: 0xa044002d  sb          $a0, 0x2D($v0)
    ctx->pc = 0x1cd390u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410595u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410595u, _value); } while (0);
    // 0x1cd394: 0xa044002e  sb          $a0, 0x2E($v0)
    ctx->pc = 0x1cd394u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410596u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410596u, _value); } while (0);
    // 0x1cd398: 0xa044002f  sb          $a0, 0x2F($v0)
    ctx->pc = 0x1cd398u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410597u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410597u, _value); } while (0);
    // 0x1cd39c: 0xa0440030  sb          $a0, 0x30($v0)
    ctx->pc = 0x1cd39cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410598u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410598u, _value); } while (0);
    // 0x1cd3a0: 0xa0440031  sb          $a0, 0x31($v0)
    ctx->pc = 0x1cd3a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x410599u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x410599u, _value); } while (0);
    // 0x1cd3a4: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x1cd3a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41059Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41059Au, _value); } while (0);
    // 0x1cd3a8: 0xa0440033  sb          $a0, 0x33($v0)
    ctx->pc = 0x1cd3a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41059Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41059Bu, _value); } while (0);
    // 0x1cd3ac: 0xa0440034  sb          $a0, 0x34($v0)
    ctx->pc = 0x1cd3acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41059Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41059Cu, _value); } while (0);
    // 0x1cd3b0: 0xa0440035  sb          $a0, 0x35($v0)
    ctx->pc = 0x1cd3b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41059Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41059Du, _value); } while (0);
    // 0x1cd3b4: 0xa0440036  sb          $a0, 0x36($v0)
    ctx->pc = 0x1cd3b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41059Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41059Eu, _value); } while (0);
    // 0x1cd3b8: 0xa0440037  sb          $a0, 0x37($v0)
    ctx->pc = 0x1cd3b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41059Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x41059Fu, _value); } while (0);
    // 0x1cd3bc: 0xa0440038  sb          $a0, 0x38($v0)
    ctx->pc = 0x1cd3bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A0u, _value); } while (0);
    // 0x1cd3c0: 0xa0440039  sb          $a0, 0x39($v0)
    ctx->pc = 0x1cd3c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A1u, _value); } while (0);
    // 0x1cd3c4: 0xa044003a  sb          $a0, 0x3A($v0)
    ctx->pc = 0x1cd3c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A2u, _value); } while (0);
    // 0x1cd3c8: 0xa044003b  sb          $a0, 0x3B($v0)
    ctx->pc = 0x1cd3c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A3u, _value); } while (0);
    // 0x1cd3cc: 0xa044003c  sb          $a0, 0x3C($v0)
    ctx->pc = 0x1cd3ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A4u, _value); } while (0);
    // 0x1cd3d0: 0xa044003d  sb          $a0, 0x3D($v0)
    ctx->pc = 0x1cd3d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A5u, _value); } while (0);
    // 0x1cd3d4: 0xa044003e  sb          $a0, 0x3E($v0)
    ctx->pc = 0x1cd3d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A6u, _value); } while (0);
    // 0x1cd3d8: 0xa044003f  sb          $a0, 0x3F($v0)
    ctx->pc = 0x1cd3d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105A7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A7u, _value); } while (0);
    // 0x1cd3dc: 0xa0450040  sb          $a1, 0x40($v0)
    ctx->pc = 0x1cd3dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4105A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A8u, _value); } while (0);
    // 0x1cd3e0: 0xa0450041  sb          $a1, 0x41($v0)
    ctx->pc = 0x1cd3e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4105A9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105A9u, _value); } while (0);
    // 0x1cd3e4: 0xa0440043  sb          $a0, 0x43($v0)
    ctx->pc = 0x1cd3e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105ABu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105ABu, _value); } while (0);
    // 0x1cd3e8: 0xa0440044  sb          $a0, 0x44($v0)
    ctx->pc = 0x1cd3e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105ACu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105ACu, _value); } while (0);
    // 0x1cd3ec: 0xa044004b  sb          $a0, 0x4B($v0)
    ctx->pc = 0x1cd3ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B3u, _value); } while (0);
    // 0x1cd3f0: 0xa0440045  sb          $a0, 0x45($v0)
    ctx->pc = 0x1cd3f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105ADu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105ADu, _value); } while (0);
    // 0x1cd3f4: 0xa0440046  sb          $a0, 0x46($v0)
    ctx->pc = 0x1cd3f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105AEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105AEu, _value); } while (0);
    // 0x1cd3f8: 0xa0440047  sb          $a0, 0x47($v0)
    ctx->pc = 0x1cd3f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105AFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105AFu, _value); } while (0);
    // 0x1cd3fc: 0xa0440048  sb          $a0, 0x48($v0)
    ctx->pc = 0x1cd3fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105B0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B0u, _value); } while (0);
    // 0x1cd400: 0xa0440049  sb          $a0, 0x49($v0)
    ctx->pc = 0x1cd400u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B1u, _value); } while (0);
    // 0x1cd404: 0xa044004a  sb          $a0, 0x4A($v0)
    ctx->pc = 0x1cd404u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4105B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B2u, _value); } while (0);
    // 0x1cd408: 0xa043004c  sb          $v1, 0x4C($v0)
    ctx->pc = 0x1cd408u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105B4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B4u, _value); } while (0);
    // 0x1cd40c: 0xa043004d  sb          $v1, 0x4D($v0)
    ctx->pc = 0x1cd40cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105B5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B5u, _value); } while (0);
    // 0x1cd410: 0xa043004e  sb          $v1, 0x4E($v0)
    ctx->pc = 0x1cd410u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105B6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B6u, _value); } while (0);
    // 0x1cd414: 0xa040004f  sb          $zero, 0x4F($v0)
    ctx->pc = 0x1cd414u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105B7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B7u, _value); } while (0);
    // 0x1cd418: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x1cd418u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B8u, _value); } while (0);
    // 0x1cd41c: 0xa0400051  sb          $zero, 0x51($v0)
    ctx->pc = 0x1cd41cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105B9u, _value); } while (0);
    // 0x1cd420: 0xa0400052  sb          $zero, 0x52($v0)
    ctx->pc = 0x1cd420u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105BAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105BAu, _value); } while (0);
    // 0x1cd424: 0xa0400053  sb          $zero, 0x53($v0)
    ctx->pc = 0x1cd424u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105BBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105BBu, _value); } while (0);
    // 0x1cd428: 0xa0400054  sb          $zero, 0x54($v0)
    ctx->pc = 0x1cd428u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105BCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105BCu, _value); } while (0);
    // 0x1cd42c: 0xa0400055  sb          $zero, 0x55($v0)
    ctx->pc = 0x1cd42cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105BDu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105BDu, _value); } while (0);
    // 0x1cd430: 0xa0400056  sb          $zero, 0x56($v0)
    ctx->pc = 0x1cd430u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105BEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105BEu, _value); } while (0);
    // 0x1cd434: 0xa0400057  sb          $zero, 0x57($v0)
    ctx->pc = 0x1cd434u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105BFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105BFu, _value); } while (0);
    // 0x1cd438: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x1cd438u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105C0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C0u, _value); } while (0);
    // 0x1cd43c: 0xa0400059  sb          $zero, 0x59($v0)
    ctx->pc = 0x1cd43cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4105C1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C1u, _value); } while (0);
    // 0x1cd440: 0xa043005a  sb          $v1, 0x5A($v0)
    ctx->pc = 0x1cd440u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C2u, _value); } while (0);
    // 0x1cd444: 0xa043005b  sb          $v1, 0x5B($v0)
    ctx->pc = 0x1cd444u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C3u, _value); } while (0);
    // 0x1cd448: 0xa043005c  sb          $v1, 0x5C($v0)
    ctx->pc = 0x1cd448u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C4u, _value); } while (0);
    // 0x1cd44c: 0xa043005d  sb          $v1, 0x5D($v0)
    ctx->pc = 0x1cd44cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C5u, _value); } while (0);
    // 0x1cd450: 0xa043005e  sb          $v1, 0x5E($v0)
    ctx->pc = 0x1cd450u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C6u, _value); } while (0);
    // 0x1cd454: 0xa043005f  sb          $v1, 0x5F($v0)
    ctx->pc = 0x1cd454u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C7u, _value); } while (0);
    // 0x1cd458: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x1cd458u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C8u, _value); } while (0);
    // 0x1cd45c: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x1cd45cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105C9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105C9u, _value); } while (0);
    // 0x1cd460: 0xa0430062  sb          $v1, 0x62($v0)
    ctx->pc = 0x1cd460u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105CAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105CAu, _value); } while (0);
    // 0x1cd464: 0xa0430063  sb          $v1, 0x63($v0)
    ctx->pc = 0x1cd464u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105CBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105CBu, _value); } while (0);
    // 0x1cd468: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x1cd468u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105CCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105CCu, _value); } while (0);
    // 0x1cd46c: 0xa0430065  sb          $v1, 0x65($v0)
    ctx->pc = 0x1cd46cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105CDu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105CDu, _value); } while (0);
    // 0x1cd470: 0xa0430066  sb          $v1, 0x66($v0)
    ctx->pc = 0x1cd470u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105CEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105CEu, _value); } while (0);
    // 0x1cd474: 0xa0430079  sb          $v1, 0x79($v0)
    ctx->pc = 0x1cd474u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105E1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105E1u, _value); } while (0);
    // 0x1cd478: 0xace6de18  sw          $a2, -0x21E8($a3)
    ctx->pc = 0x1cd478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x24DE18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DE18u, _value); } while (0);
    // 0x1cd47c: 0xa0430067  sb          $v1, 0x67($v0)
    ctx->pc = 0x1cd47cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105CFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105CFu, _value); } while (0);
    // 0x1cd480: 0xa0430068  sb          $v1, 0x68($v0)
    ctx->pc = 0x1cd480u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D0u, _value); } while (0);
    // 0x1cd484: 0xa0430069  sb          $v1, 0x69($v0)
    ctx->pc = 0x1cd484u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D1u, _value); } while (0);
    // 0x1cd488: 0xa043006a  sb          $v1, 0x6A($v0)
    ctx->pc = 0x1cd488u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D2u, _value); } while (0);
    // 0x1cd48c: 0xa043006b  sb          $v1, 0x6B($v0)
    ctx->pc = 0x1cd48cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D3u, _value); } while (0);
    // 0x1cd490: 0xa043006c  sb          $v1, 0x6C($v0)
    ctx->pc = 0x1cd490u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D4u, _value); } while (0);
    // 0x1cd494: 0xa043006d  sb          $v1, 0x6D($v0)
    ctx->pc = 0x1cd494u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D5u, _value); } while (0);
    // 0x1cd498: 0xa043006e  sb          $v1, 0x6E($v0)
    ctx->pc = 0x1cd498u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D6u, _value); } while (0);
    // 0x1cd49c: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x1cd49cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D7u, _value); } while (0);
    // 0x1cd4a0: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x1cd4a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D8u, _value); } while (0);
    // 0x1cd4a4: 0xa0430071  sb          $v1, 0x71($v0)
    ctx->pc = 0x1cd4a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105D9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105D9u, _value); } while (0);
    // 0x1cd4a8: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x1cd4a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105DAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105DAu, _value); } while (0);
    // 0x1cd4ac: 0xa0430073  sb          $v1, 0x73($v0)
    ctx->pc = 0x1cd4acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105DBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105DBu, _value); } while (0);
    // 0x1cd4b0: 0xa0430074  sb          $v1, 0x74($v0)
    ctx->pc = 0x1cd4b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105DCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105DCu, _value); } while (0);
    // 0x1cd4b4: 0xa0430075  sb          $v1, 0x75($v0)
    ctx->pc = 0x1cd4b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105DDu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105DDu, _value); } while (0);
    // 0x1cd4b8: 0xa0430076  sb          $v1, 0x76($v0)
    ctx->pc = 0x1cd4b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105DEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105DEu, _value); } while (0);
    // 0x1cd4bc: 0xa0430077  sb          $v1, 0x77($v0)
    ctx->pc = 0x1cd4bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4105DFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4105DFu, _value); } while (0);
    // 0x1cd4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4C0u;
        // 0x1cd4c4: 0xa0430078  sb          $v1, 0x78($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4C8u;
}
